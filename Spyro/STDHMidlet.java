// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:49:16 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import java.io.*;
import java.util.Random;
import java.util.Vector;
import javax.microedition.lcdui.Graphics;
import javax.microedition.lcdui.Image;
import javax.microedition.rms.RecordStoreException;

public final class STDHMidlet extends b
{

    private static void b(int i1)
    {
        if(i1 < g_java_lang_String_array1d_static_fld.length)
        {
            int j1 = i1;
            int k1 = 0x12c0000;
            int l1 = 0x12c0000;
            for(int i2 = 0; i2 < j1; i2++)
            {
                if((as_int_static_fld & 1 << i2) != 0)
                    k1 += 0x640000;
                if((at_int_static_fld & 1 << i2) != 0)
                    l1 += 0x640000;
            }

            U_int_static_fld = k1;
            W_int_static_fld = l1;
            h_int_static_fld = i1;
            d_int_static_fld = 7;
            return;
        }
        if(i1 == g_java_lang_String_array1d_static_fld.length)
        {
            d_int_static_fld = 28;
            r_boolean_static_fld = true;
            b(i1);
        }
    }

    private static void h()
    {
        b(h_int_static_fld + 1);
        int i1 = h_int_static_fld + 1;
        boolean flag = true;
        switch(i1)
        {
        case 0: // '\0'
            dX = 0;
            break;

        case 2: // '\002'
            dX = 2;
            break;

        case 3: // '\003'
            dX = 3;
            break;

        case 5: // '\005'
            dX = 4;
            break;

        case 1: // '\001'
        case 4: // '\004'
        case 6: // '\006'
            flag = false;
            break;
        }
        if(i1 >= g_java_lang_String_array1d_static_fld.length)
        {
            r_boolean_static_fld = true;
            b(h_int_static_fld + 1);
            dX = 1;
        }
        if(flag)
        {
            d_int_static_fld = 28;
            f(11);
            return;
        } else
        {
            b(h_int_static_fld + 1);
            return;
        }
    }

    public STDHMidlet()
    {
    }

    private static void c(int i1)
    {
        d_int_static_fld = i1;
    }

    private static void i()
    {
        c_int_static_fld;
        JVM INSTR tableswitch 1 28: default 7983
    //                   1 7950
    //                   2 7956
    //                   3 7965
    //                   4 7974
    //                   5 7983
    //                   6 1856
    //                   7 7980
    //                   8 7983
    //                   9 7983
    //                   10 128
    //                   11 7983
    //                   12 7983
    //                   13 7983
    //                   14 7983
    //                   15 7983
    //                   16 7983
    //                   17 7983
    //                   18 7983
    //                   19 7983
    //                   20 7983
    //                   21 7983
    //                   22 7983
    //                   23 7983
    //                   24 1766
    //                   25 1769
    //                   26 7983
    //                   27 1850
    //                   28 496;
           goto _L1 _L2 _L3 _L4 _L5 _L1 _L6 _L7 _L1 _L1 _L8 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L1 _L9 _L1 _L10 _L11
_L1:
        break; /* Loop/switch isn't completed */
_L8:
        E();
        if(m_boolean_static_fld)
        {
            if(e.c == 0 || (e.d & 0x20040) != 0)
            {
                String s1 = a_java_lang_String_array1d_static_fld[ag_int_static_fld];
                try
                {
                    b.a_boolean_static_fld = true;
                    b.a_b_static_fld.platformRequest(s1);
                }
                catch(Exception _ex) { }
                break; /* Loop/switch isn't completed */
            }
            if(e.c != 1)
                break; /* Loop/switch isn't completed */
            if(ae_int_static_fld == 0 && b_java_lang_String_array1d_static_fld[ag_int_static_fld] == null)
                u();
            else
                l(ag_int_static_fld);
            break; /* Loop/switch isn't completed */
        }
        if(a_java_lang_String_array1d_static_fld[ag_int_static_fld] != null && (e.c == 0 || (e.d & 0x20040) != 0))
        {
            v();
            break; /* Loop/switch isn't completed */
        }
        if(a_int_array1d_static_fld != null && a_int_array1d_static_fld[ag_int_static_fld] != 0 && e.c == 5)
        {
            if(ag_int_static_fld + a_int_array1d_static_fld[ag_int_static_fld] < af_int_static_fld)
                l(ag_int_static_fld + a_int_array1d_static_fld[ag_int_static_fld]);
            else
                u();
            break; /* Loop/switch isn't completed */
        }
        if(ae_int_static_fld == 0 && e.c == 1)
        {
            u();
            break; /* Loop/switch isn't completed */
        }
        boolean flag = false;
        int j1 = 0;
        if(a_java_lang_String_array2d_static_fld[ag_int_static_fld] != null && l_boolean_static_fld && (ak_int_static_fld -= a_int_static_fld) <= 0 && (ai_int_static_fld -= (int)(b_long_static_fld * 0x280000L >> 16)) >> 16 < -aj_int_static_fld)
        {
            j1 = ai_int_static_fld;
            ai_int_static_fld = 0x30000;
            ak_int_static_fld = 1500;
            flag = true;
        }
        if(b_int_array1d_static_fld == null || b_int_array1d_static_fld[ag_int_static_fld] <= 0 || (al_int_static_fld -= a_int_static_fld) > 0 || a_java_lang_String_array2d_static_fld[ag_int_static_fld] != null && l_boolean_static_fld && !flag)
            break; /* Loop/switch isn't completed */
        if(ag_int_static_fld + 1 < af_int_static_fld)
        {
            l(ag_int_static_fld + 1);
            break; /* Loop/switch isn't completed */
        }
        u();
        if(flag)
            ai_int_static_fld = j1;
        break; /* Loop/switch isn't completed */
_L11:
        E();
        if(r_int_static_fld != 0) goto _L13; else goto _L12
_L12:
        q_int_static_fld;
        JVM INSTR tableswitch 1 11: default 1357
    //                   1 568
    //                   2 966
    //                   3 972
    //                   4 978
    //                   5 1030
    //                   6 1357
    //                   7 1156
    //                   8 1162
    //                   9 1357
    //                   10 1243
    //                   11 1354;
           goto _L14 _L15 _L16 _L17 _L18 _L19 _L14 _L20 _L21 _L14 _L22 _L23
_L14:
        break; /* Loop/switch isn't completed */
_L15:
        int i1;
        if((i1 = e.d) == 0) goto _L25; else goto _L24
_L24:
        int k1 = b_int_array2d_static_fld.length;
_L58:
        if(--k1 >= 0)
        {
            if((i1 & b_int_array2d_static_fld[k1][n_int_array1d_static_fld[k1]]) != 0)
            {
                n_int_array1d_static_fld[k1]++;
                if(n_int_array1d_static_fld[k1] == b_int_array2d_static_fld[k1].length)
                    switch(k1)
                    {
                    case 0: // '\0'
                        w_boolean_static_fld = true;
                        au_int_static_fld = 6;
                        boolean flag1 = false;
                        r_int_static_fld = 4;
                        // fall through

                    default:
                        n_int_array1d_static_fld[k1] = 0;
                        break;
                    }
            } else
            {
                n_int_array1d_static_fld[k1] = 0;
            }
            continue; /* Loop/switch isn't completed */
        }
_L25:
        switch(dG = a())
        {
        case 0: // '\0'
            b(au_int_static_fld);
            break;

        case 2: // '\002'
            boolean flag2 = false;
            r_int_static_fld = 4;
            break;

        case 1: // '\001'
            h_int_static_fld = 0;
            if(q_boolean_static_fld && !r_boolean_static_fld)
                r_int_static_fld = 10;
            else
            if(q_boolean_static_fld && r_boolean_static_fld)
            {
                r_int_static_fld = 10;
            } else
            {
                dX = 0;
                r_int_static_fld = 11;
                r_boolean_static_fld = false;
                b(h_int_static_fld);
            }
            break;

        case 3: // '\003'
        case 4: // '\004'
        case 5: // '\005'
            ag_int_static_fld = dG - 3;
            d_int_static_fld = 10;
            break;

        case 6: // '\006'
            if(N_boolean_static_fld)
            {
                if((e.d & 0x2020) != 0)
                {
                    if(--ef < 0)
                        ef = eg - 1;
                } else
                if(++ef >= eg)
                    ef = 0;
                a_java_lang_String_static_fld = i_java_lang_String_array1d_static_fld[ef];
                z(ef);
                a();
                B();
                d(true);
            } else
            {
                r_int_static_fld = 3;
            }
            break;

        case 7: // '\007'
            r_int_static_fld = i1 = 2;
            break;

        case 8: // '\b'
            r_int_static_fld = i1 = 5;
            break;
        }
        if(e.c == 4)
            e(8);
        break; /* Loop/switch isn't completed */
_L16:
        ae();
        break; /* Loop/switch isn't completed */
_L17:
        ay();
        break; /* Loop/switch isn't completed */
_L18:
        if((dH = a()) != -1)
            b(dH);
        if(e.c == 1 || (e.d & 0x100000) != 0)
            e(1);
        if(e.c == 0)
            b(dH);
        break; /* Loop/switch isn't completed */
_L19:
        if(e.c == 4 || (e.d & 0x100000) != 0)
            e(1);
        if(!P_boolean_static_fld && (P_boolean_static_fld = !c()) && dJ == 5)
        {
            e.a();
            e.c(0);
        }
        if(e.c != 3 && (e.d & 0x20040) == 0 && e.c != 0)
            break; /* Loop/switch isn't completed */
        if(!c())
        {
            if(++dJ < 6)
                ac();
            else
                e(1);
        } else
        {
            T();
            c(da, true);
        }
        break; /* Loop/switch isn't completed */
_L20:
        ao();
        break; /* Loop/switch isn't completed */
_L21:
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                c(24);
                break; /* Loop/switch isn't completed */
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
                e(1);
            break; /* Loop/switch isn't completed */
        }
        if((e.d & 0x20040) != 0 || e.c == 0)
            T();
        break; /* Loop/switch isn't completed */
_L22:
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                r_boolean_static_fld = false;
                try
                {
                    e.a("g", 0, null);
                }
                catch(RecordStoreException _ex) { }
                z();
                dX = 0;
                e(11);
                b(h_int_static_fld);
                break; /* Loop/switch isn't completed */
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
                e(1);
            break; /* Loop/switch isn't completed */
        }
        if((e.d & 0x20040) != 0 || e.c == 0)
            T();
        break; /* Loop/switch isn't completed */
_L23:
        ar();
        t_int_static_fld += a_int_static_fld;
        s_int_static_fld += b_int_static_fld;
        break; /* Loop/switch isn't completed */
_L13:
        o();
        q_int_static_fld = r_int_static_fld;
        r_int_static_fld = 0;
        s_int_static_fld = 0;
        t_int_static_fld = 0;
        switch(q_int_static_fld)
        {
        case 6: // '\006'
        case 9: // '\t'
        default:
            break;

        case 1: // '\001'
            d(false);
            break; /* Loop/switch isn't completed */

        case 2: // '\002'
            ad();
            break; /* Loop/switch isn't completed */

        case 3: // '\003'
            A(1);
            break; /* Loop/switch isn't completed */

        case 4: // '\004'
            String as3[] = new String[i1 = g_java_lang_String_array1d_static_fld.length];
            int ai4[] = new int[i1];
            for(int k3 = 0; k3 != g_java_lang_String_array1d_static_fld.length; k3++)
                if(au_int_static_fld >= k3)
                {
                    as3[k3] = a(k3);
                    ai4[k3] = 0;
                } else
                {
                    as3[k3] = "";
                    ai4[k3] = 2;
                }

            dH = 0;
            a(c(58), as3, ai4, dH, 0, aH, 2, 2, 0);
            e.a();
            e.c(1);
            e.c(0);
            b(true);
            a(cI, true, true);
            cN = dA;
            break;

        case 5: // '\005'
            dJ = 0;
            ac();
            e.c(3);
            e.c(4);
            break;

        case 10: // '\n'
            String as1[] = {
                c(24)
            };
            int ai1[] = {
                0, 0
            };
            a(as1, ai1, ((a) (null)), 0, 0, aH, aI - b_a_static_fld.b(0), 17, true);
            e.c(0);
            e.c(4);
            b(true);
            c(da, true);
            break;

        case 11: // '\013'
            aq();
            break;

        case 7: // '\007'
            an();
            break;

        case 8: // '\b'
            String as2[] = {
                c(23)
            };
            int ai2[] = {
                0, 0
            };
            a(as2, ai2, ((a) (null)), 0, 0, aH, aI, 17, true);
            e.c(0);
            e.c(4);
            b(true);
            c(da, true);
            break;
        }
        break; /* Loop/switch isn't completed */
_L9:
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                c(24);
                break; /* Loop/switch isn't completed */
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
                c(3);
            break; /* Loop/switch isn't completed */
        }
        if((e.d & 0x20040) != 0 || e.c == 0)
            T();
        break; /* Loop/switch isn't completed */
_L10:
        ar();
        break; /* Loop/switch isn't completed */
_L6:
        if(k_int_static_fld != 0) goto _L27; else goto _L26
_L26:
        j_int_static_fld;
        JVM INSTR tableswitch 1 20: default 7921
    //                   1 1981
    //                   2 7921
    //                   3 1978
    //                   4 1978
    //                   5 7921
    //                   6 1981
    //                   7 1981
    //                   8 1981
    //                   9 1981
    //                   10 1960
    //                   11 1978
    //                   12 1978
    //                   13 7921
    //                   14 1978
    //                   15 1978
    //                   16 1978
    //                   17 1978
    //                   18 1978
    //                   19 1966
    //                   20 1972;
           goto _L28 _L29 _L28 _L30 _L30 _L28 _L29 _L29 _L29 _L29 _L31 _L30 _L30 _L28 _L30 _L30 _L30 _L30 _L30 _L32 _L33
_L28:
        break; /* Loop/switch isn't completed */
_L31:
        ao();
        break; /* Loop/switch isn't completed */
_L32:
        Z();
        break; /* Loop/switch isn't completed */
_L33:
        aa();
        break; /* Loop/switch isn't completed */
_L30:
        E();
_L29:
        if(j_int_static_fld == 1 && !d_boolean_static_fld && dZ == 0 && !c_boolean_static_fld)
        {
            d_boolean_static_fld = true;
            d(15);
        }
        if(j_int_static_fld == 8)
            E();
        if((p_int_static_fld & 0x8000) != 0)
            aI();
        if((p_int_static_fld & 0x1000) != 0) goto _L35; else goto _L34
_L34:
label0:
        {
label1:
            {
                if(M_boolean_static_fld)
                {
                    e.c(2);
                    if(e.c == 2)
                    {
                        d(4);
                        l();
                    } else
                    if((e.d & 0x800) != 0)
                    {
                        d(15);
                        l();
                    }
                }
                as2 = w_int_array1d_static_fld.length;
                do
                {
                    if((as2 -= 8) < 0)
                        break;
                    if(w_int_array1d_static_fld[as2] != 0)
                        if(w_int_array1d_static_fld[as2 + 1] != 12 && w_int_array1d_static_fld[as2 + 1] != 13 && (w_int_array1d_static_fld[as2 + 5] -= b_int_static_fld) <= 0)
                        {
                            a(as2, false);
                        } else
                        {
                            ai2 = (int)((long)w_int_array1d_static_fld[as2 + 3] * b_long_static_fld >> 16);
                            int i2;
                            int l3 = (i2 = w_int_array1d_static_fld[as2 + 2]) + ai2;
                            int k5 = i2 + 32768 >> 16;
                            int i7 = l3 + 32768 >> 16;
                            boolean flag6 = false;
                            boolean flag10 = false;
                            boolean flag13 = false;
                            int j15 = i7;
                            int k14 = k5;
                            boolean flag11 = false;
                            int l16 = e(w_int_array1d_static_fld[as2 + 4]);
                            int j9;
                            int k17 = j9 = d(k14);
                            int i18 = d(j15) - k17;
                            byte byte3 = 1;
                            if(j15 < k14)
                            {
                                i18 = -i18;
                                byte3 = -1;
                            }
                            int j19 = 0;
                            ai2 = l16 * ek;
                            do
                            {
                                if(i18 < 0)
                                    break;
                                if(k17 >= 0 && k17 < ek)
                                    j19 |= c_byte_array1d_static_fld[ai2 + k17];
                                else
                                    j19 |= 1;
                                if((j19 &= 0x11) != 0)
                                    break;
                                k17 += byte3;
                                i18--;
                            } while(true);
                            if(j19 != 0)
                            {
                                em = 0;
                                if(k17 != j9)
                                    if(byte3 > 0)
                                        em = (k17 << 4) - 1 - k14;
                                    else
                                        em = (k17 + 1 << 4) - k14;
                            }
                            if((j9 = j19) != 0)
                                l3 = k5 + em << 16;
                            w_int_array1d_static_fld[as2 + 2] = l3;
                            if(j9 != 0)
                            {
                                a(as2, false);
                            } else
                            {
                                int i11 = w_int_array1d_static_fld[as2 + 7];
                                i11 = d_d_array1d_static_fld[w_int_array1d_static_fld[as2 + 1]].a(i11, b_int_static_fld);
                                w_int_array1d_static_fld[as2 + 7] = i11;
                            }
                        }
                } while(true);
                V();
                if(ak_int_array1d_static_fld != null)
                    for(as2 = ak_int_array1d_static_fld.length; --as2 >= 0;)
                        ak_int_array1d_static_fld[as2] = m_d_array1d_static_fld[as2].a(ak_int_array1d_static_fld[as2], b_int_static_fld);

                for(as2 = 0; as2 < 8; as2++)
                {
                    ai2 = as2 << 4;
                    if(L_int_array1d_static_fld[ai2] == 0)
                        continue;
                    L_int_array1d_static_fld[ai2 + 13] += b_int_static_fld;
                    if(L_int_array1d_static_fld[ai2 + 13] >= 400)
                    {
                        L_int_array1d_static_fld[ai2] = 0;
                        q(0);
                    } else
                    {
                        L_int_array1d_static_fld[ai2 + 5] = L_int_array1d_static_fld[ai2 + 6] + ((6 * L_int_array1d_static_fld[ai2 + 13]) / 400 << 1);
                    }
                }

                if((p_int_static_fld & 0x200) != 0)
                {
                    a(0);
                    for(as2 = 0; as2 != bv; as2++)
                    {
                        ai2 = as2 * 7;
                        et = (er = F_int_array1d_static_fld[ai2]) + F_int_array1d_static_fld[ai2 + 2];
                        eu = (es = F_int_array1d_static_fld[ai2 + 1]) + F_int_array1d_static_fld[ai2 + 3];
                        if(!e())
                            continue;
                        boolean flag3 = false;
                        int i4 = as2 * 7;
                        int l5;
                        if((l5 = F_int_array1d_static_fld[i4 + 4]) == 0)
                        {
                            d(9);
                            continue;
                        }
                        if(l5 == 220)
                        {
                            a(di, F_int_array1d_static_fld[i4] + F_int_array1d_static_fld[i4 + 2] + 16, F_int_array1d_static_fld[i4 + 1] - 16, dn);
                            continue;
                        }
                        if(l5 == 221)
                            a(dk, B_int_static_fld + 16, C_int_static_fld - 32, dn);
                    }

                }
                bt = -1;
                as2 = 0;
                ai2 = 0;
                a(0);
                for(int j2 = 0; j2 != bs; j2++)
                {
                    int j4 = j2 * 11;
                    byte byte1 = ((byte)(B_int_array1d_static_fld[j4 + 7] != 0 ? 4 : 0));
                    boolean flag5 = false;
                    int j8 = B_int_array1d_static_fld[j4 + 5] + byte1;
                    B_int_array1d_static_fld[j4 + 6] = e_d_array1d_static_fld[j8].a(B_int_array1d_static_fld[j4 + 6], b_int_static_fld);
                    if((B_int_array1d_static_fld[j4 + 5] == 2 || B_int_array1d_static_fld[j4 + 5] == 3) && (B_int_array1d_static_fld[j4 + 6] & 3) == 0)
                    {
                        int k9 = B_int_array1d_static_fld[j4 + 5] != 2 ? 1 : 0;
                        h(j2, k9);
                        int i13 = j4;
                        boolean flag12 = false;
                        int k15 = 0;
                        int i16 = 0;
                        int j11 = 0;
                        int i17 = 0;
                        switch(B_int_array1d_static_fld[i13 + 3])
                        {
                        case 0: // '\0'
                            int l18;
                            int k19 = (l18 = B_int_array1d_static_fld[i13 + 9]) * 9;
                            b(l18, false);
                            C_int_array1d_static_fld[k19 + 5] = 1;
                            C_int_array1d_static_fld[k19 + 6] = 1;
                            int i10 = B_int_array1d_static_fld[i13 + 9] * 9;
                            int l17 = C_int_array1d_static_fld[i10];
                            int j18 = C_int_array1d_static_fld[i10 + 1];
                            flag12 = true;
                            k15 = aL;
                            i16 = aM;
                            j11 = l17;
                            i17 = j18;
                            break;
                        }
                        if(flag12 && j_int_static_fld == 1)
                            a(k15, i16, j11, i17, true);
                        B_int_array1d_static_fld[i13 + 4] = 0;
                        bt = -1;
                        V();
                    }
                    if(B_int_array1d_static_fld[j4 + 4] != 1)
                        continue;
                    int j10 = B_int_array1d_static_fld[j4];
                    int k11 = B_int_array1d_static_fld[j4 + 1];
                    a(j10, k11, -32, 32, -16, 16, false);
                    if(e() && (B_int_static_fld - B_int_array1d_static_fld[j4] > 0 && z_int_static_fld == -1 || B_int_static_fld - B_int_array1d_static_fld[j4] < 0 && z_int_static_fld == 1))
                    {
                        bt = j2;
                        as2 = j10;
                        ai2 = k11;
                    }
                }

                if(bt == -1)
                    break label0;
                a(dj, as2, ai2 - 32, dl);
                if(!a(1))
                    break label0;
                a(as2, ai2, -16, 16, -16, 16, false);
                if(!e())
                    break label0;
                if(bt == -1)
                {
                    if(true)
                        break label0;
                    break label1;
                }
                int j13 = bt * 11;
                if(B_int_array1d_static_fld[j13 + 4] == 0)
                {
                    if(true)
                        break label0;
                    break label1;
                }
                int l14 = B_int_array1d_static_fld[j13 + 5];
                byte byte2 = 0;
                switch(l14)
                {
                case 1: // '\001'
                    byte2 = 2;
                    break;

                case 0: // '\0'
                    byte2 = 3;
                    break;

                default:
                    if(true)
                        break label0;
                    break label1;
                }
                h(bt, byte2);
                int j16 = B_int_array1d_static_fld[j13];
                int l11 = B_int_array1d_static_fld[j13 + 1];
                a(2, j16, l11, 0, 0);
                x(dl);
                B_int_array1d_static_fld[j13 + 10] = by;
                if(false)
                    break label0;
            }
            b(15, 0);
        }
        bS = -1;
        for(as2 = 0; as2 != bC; as2++)
        {
            ai2 = as2 * 6;
            int k2 = J_int_array1d_static_fld[ai2 + 2];
            int k4 = J_int_array1d_static_fld[ai2];
            int i6 = J_int_array1d_static_fld[ai2 + 1];
            D();
            a(k4, i6, -16, 16, -32, 16, false);
            if(e() || k2 != 0)
            {
                d d2 = i_d_array1d_static_fld[J_int_array1d_static_fld[ai2 + 4]];
                J_int_array1d_static_fld[ai2 + 5] = d2.a(J_int_array1d_static_fld[ai2 + 5], b_int_static_fld);
                J_int_array1d_static_fld[ai2 + 3] += b_int_static_fld;
                a(0);
                switch(k2)
                {
                default:
                    break;

                case 1: // '\001'
                    a(k4, i6, -5, 5, -32, 16, false);
                    if(!e())
                    {
                        i(ai2, 3);
                    } else
                    {
                        bS = as2;
                        a(dj, k4, i6 - 32, dm);
                    }
                    break;

                case 0: // '\0'
                    a(k4, i6, -5, 5, -32, 16, false);
                    if(!x_boolean_static_fld && e())
                        i(ai2, 2);
                    break;

                case 2: // '\002'
                    if((J_int_array1d_static_fld[ai2 + 5] & 3) != 0)
                        break;
                    i(ai2, 1);
                    bR = 1;
                    bF = bH = k4;
                    bG = bI = i6 - 16;
                    if(as2 % 2 == 0)
                        bQ = as2 + 1;
                    else
                        bQ = as2 - 1;
                    int k8 = bQ * 6;
                    bL = J_int_array1d_static_fld[k8];
                    bM = J_int_array1d_static_fld[k8 + 1];
                    bJ = J_int_array1d_static_fld[k8];
                    bK = J_int_array1d_static_fld[k8 + 1] - 16;
                    bN = bJ - bH;
                    bO = bK - bI;
                    boolean flag8 = false;
                    bE = ((f(bN) + f(bO) / 2) / 48) * 1000;
                    bP = as2;
                    break;

                case 3: // '\003'
                    if((J_int_array1d_static_fld[ai2 + 5] & 3) == 0)
                        i(ai2, 0);
                    break;

                case 4: // '\004'
                    if(J_int_array1d_static_fld[ai2 + 3] > 400)
                    {
                        i(ai2, 5);
                        y_boolean_static_fld = true;
                        a(bL, bM);
                    }
                    break;

                case 6: // '\006'
                    if(J_int_array1d_static_fld[ai2 + 3] > 400)
                    {
                        i(ai2, 0);
                        y_boolean_static_fld = false;
                    }
                    break;

                case 5: // '\005'
                    int i12 = bP * 6;
                    int k13 = bQ * 6;
                    if(!x_boolean_static_fld || J_int_array1d_static_fld[k13 + 2] == 3)
                        break;
                    bD += b_int_static_fld;
                    bF = bH + (bD * bN) / bE;
                    bG = bI + (bD * bO) / bE;
                    if(bD >= bE)
                    {
                        bF = bJ;
                        bG = bK;
                        a(1, J_int_array1d_static_fld[k13], J_int_array1d_static_fld[k13 + 1], 0xffffff, 0xffddff, 0xeebbff);
                        i(k13, 6);
                        i(i12, 0);
                        bS = -1;
                        x_boolean_static_fld = false;
                        av_int_static_fld = 0;
                    } else
                    {
                        av_int_static_fld = 2;
                        aw_int_static_fld = bF;
                        ax_int_static_fld = bG;
                        bR = i_d_array1d_static_fld[5].a(bR, b_int_static_fld);
                    }
                    break;
                }
            }
        }

        for(as2 = 0; as2 != bu; as2++)
        {
            ai2 = as2 * 9;
            C_int_array1d_static_fld[ai2 + 6] = f_d_array1d_static_fld[C_int_array1d_static_fld[ai2 + 5]].a(C_int_array1d_static_fld[ai2 + 6], b_int_static_fld);
            if(C_int_array1d_static_fld[ai2 + 5] == 2 && (C_int_array1d_static_fld[ai2 + 6] & 3) == 0)
            {
                C_int_array1d_static_fld[ai2 + 5] = 3;
                C_int_array1d_static_fld[ai2 + 6] = 1;
                C_int_array1d_static_fld[ai2 + 8] = by;
            }
            if(C_int_array1d_static_fld[ai2 + 5] == 1 && t_boolean_static_fld)
                C_int_array1d_static_fld[ai2 + 5] = 2;
        }

        a(0);
        for(as2 = 0; as2 != bw; as2++)
        {
            ai2 = as2 * 10;
            G_int_array1d_static_fld[ai2 + 8] += b_int_static_fld;
            if(G_int_array1d_static_fld[ai2 + 6] == 1 || G_int_array1d_static_fld[ai2 + 6] == 2)
                continue;
            d d1 = g_d_array1d_static_fld[G_int_array1d_static_fld[ai2 + 4]];
            G_int_array1d_static_fld[ai2 + 5] = d1.a(G_int_array1d_static_fld[ai2 + 5], b_int_static_fld);
            if(G_int_array1d_static_fld[ai2 + 6] != 0)
                continue;
            c(G_int_array1d_static_fld[ai2], G_int_array1d_static_fld[ai2 + 1], G_int_array1d_static_fld[ai2 + 2]);
            if(e())
            {
                G_int_array1d_static_fld[ai2 + 8] = 0;
                G_int_array1d_static_fld[ai2 + 5] = 1;
                G_int_array1d_static_fld[ai2 + 6] = 1;
                int j6 = G_int_array1d_static_fld[ai2 + 2];
                boolean flag4 = false;
                int j7 = as2 * 10;
                a(0, G_int_array1d_static_fld[j7], G_int_array1d_static_fld[j7 + 1], 0, 0);
                switch(j6)
                {
                case 88: // 'X'
                    i(0x640000);
                    G_int_array1d_static_fld[j7 + 9] = by;
                    break;

                case 87: // 'W'
                    h(0x640000);
                    G_int_array1d_static_fld[j7 + 9] = by;
                    break;

                case 89: // 'Y'
                    h(0x640000);
                    i(0x640000);
                    G_int_array1d_static_fld[j7 + 9] = by;
                    break;

                case 90: // 'Z'
                    as_int_static_fld |= 1 << dZ;
                    boolean flag7 = false;
                    j(0x640000);
                    G_int_array1d_static_fld[j7 + 9] = by;
                    break;

                case 91: // '['
                    at_int_static_fld |= 1 << dZ;
                    boolean flag9 = false;
                    k(0x640000);
                    G_int_array1d_static_fld[j7 + 9] = by;
                    break;

                case 174: 
                    v_int_array1d_static_fld[2] = 1;
                    P_int_static_fld = 2;
                    break;

                case 175: 
                    v_int_array1d_static_fld[6] = 1;
                    P_int_static_fld = 6;
                    break;

                case 176: 
                    v_int_array1d_static_fld[0] = 1;
                    P_int_static_fld = 0;
                    break;

                case 177: 
                    v_int_array1d_static_fld[4] = 1;
                    P_int_static_fld = 4;
                    break;

                case 178: 
                    v_int_array1d_static_fld[6] = 2;
                    v_int_array1d_static_fld[4] = 2;
                    v_int_array1d_static_fld[2] = 2;
                    v_int_array1d_static_fld[0] = 2;
                    break;
                }
            }
        }

        a(0);
        for(as2 = 0; as2 != bx; as2++)
        {
            ai2 = as2 * 6;
            int l2 = I_int_array1d_static_fld[ai2 + 2];
            I_int_array1d_static_fld[ai2 + 4] = h_d_array1d_static_fld[c(l2)].a(I_int_array1d_static_fld[ai2 + 4], b_int_static_fld);
            if(I_int_array1d_static_fld[ai2 + 2] == 1 && (I_int_array1d_static_fld[ai2 + 4] & 3) == 0)
            {
                I_int_array1d_static_fld[ai2 + 2] = 2;
                I_int_array1d_static_fld[ai2 + 4] = 1;
            }
            int k6 = I_int_array1d_static_fld[ai2];
            int k7 = I_int_array1d_static_fld[ai2 + 1];
            if(w_int_static_fld == 10 || l2 != 0)
                continue;
            a(k6, k7, -8, 8, -48, 0, false);
            if(!e())
                continue;
            int k10 = ai2;
            int l8 = as2;
            I_int_array1d_static_fld[k10 + 2] = 1;
            I_int_array1d_static_fld[k10 + 4] = 1;
            by = l8;
            bz = I_int_array1d_static_fld[k10];
            bA = I_int_array1d_static_fld[k10 + 1];
            bB = z_int_static_fld;
            if(by <= 0)
                continue;
            for(int j12 = 0; j12 <= by - 1; j12++)
            {
                int i14 = j12 * 6;
                I_int_array1d_static_fld[i14 + 2] = 3;
                I_int_array1d_static_fld[i14 + 4] = 1;
            }

        }

        if((p_int_static_fld & 0x4000) != 0) goto _L37; else goto _L36
_L36:
        gC = -1;
        as2 = 0;
_L56:
        if(as2 == gB) goto _L37; else goto _L38
_L38:
        int i3;
        int ai5[];
        int l6;
        int i8;
        int i9;
        int l10;
        int k12;
        int j14;
        int i15;
        int l15;
        int k16;
        ai2 = as2 * 22;
        if((aE_int_array1d_static_fld[ai2 + 9] & aT) == 0)
        {
            if(aE_int_array1d_static_fld[ai2 + 18] >= 2000)
                aE_int_array1d_static_fld[ai2 + 19] = 0;
            else
                aE_int_array1d_static_fld[ai2 + 18] += b_int_static_fld;
        } else
        {
            aE_int_array1d_static_fld[ai2 + 18] = 0;
            aE_int_array1d_static_fld[ai2 + 19] = 1;
        }
        if(aE_int_array1d_static_fld[ai2 + 19] == 0)
            continue; /* Loop/switch isn't completed */
        if(aE_int_array1d_static_fld[ai2 + 17] != -1)
        {
            aE_int_array1d_static_fld[ai2 + 17] += b_int_static_fld;
            if(aE_int_array1d_static_fld[ai2 + 17] >= 1000)
                aE_int_array1d_static_fld[ai2 + 17] = -1;
        }
        i3 = ai2;
        l6 = (ai5 = aE_int_array1d_static_fld)[i3 + 8];
        i8 = ai5[i3 + 12];
        i9 = ai5[i3 + 16];
        ai5[i3 + 14] += b_int_static_fld;
        a(0);
        l10 = ai5[i3];
        k12 = ai5[i3 + 1];
        j14 = ai5[i3 + 4];
        i15 = ai5[i3 + 5];
        l15 = ai5[i3 + 6];
        k16 = ai5[i3 + 7];
        l6;
        JVM INSTR lookupswitch 8: default 6173
    //                   1: 5872
    //                   2: 6021
    //                   3: 5356
    //                   4: 5885
    //                   5: 6051
    //                   6: 6118
    //                   7: 5834
    //                   201: 5989;
           goto _L39 _L40 _L41 _L42 _L43 _L44 _L45 _L46 _L47
_L39:
        break; /* Loop/switch isn't completed */
_L42:
        int ai3[];
        int i19;
        a(i3, a_d_array2d_static_fld[i9]);
        int j17;
        boolean flag15;
        if(flag15 = i8 == 1)
        {
            k12 = l15 - j14;
            j17 = k16 - i15;
            l10 = f(l10 - j14);
        } else
        {
            k12 = j14 - l15;
            j17 = i15 - k16;
            l10 = f(l10 - l15);
        }
        int k18 = f(j14 - l15);
        l6 = k18;
        ai2 = i9;
        i19 = 0;
        switch(ai2)
        {
        case 2: // '\002'
            i19 = 32;
            break;

        case 0: // '\0'
            i19 = 32;
            break;

        case 1: // '\001'
            i19 = 16;
            break;
        }
        i19 = (l6 * 1000) / i19;
        int l19 = 0;
        if((l19 = (l10 * i19) / k18 + b_int_static_fld) >= i19)
        {
            ai5[i3 + 12] = i8 != 1 ? 1 : -1;
            f(i3, 3);
        } else
        {
            ai5[i3] = (flag15 ? j14 : l15) + (l19 * k12) / i19;
            ai5[i3 + 1] = (flag15 ? i15 : k16) + (l19 * j17) / i19;
        }
        if(i9 != 0)
            break; /* Loop/switch isn't completed */
        i19 = i9;
        l6 = i3;
        ai3 = ai5;
        if(ai5[l6 + 20] == 1)
        {
            ai3[l6 + 21] -= b_int_static_fld;
            if(ai3[l6 + 21] <= 0)
                f(l6, 7);
            break; /* Loop/switch isn't completed */
        }
        a(0);
        g(ai3[l6 + 16], 4);
        a(ai3[l6], ai3[l6 + 1], bg, bh, bi, bj, ai3[l6 + 12] != -1);
        if(e())
            break; /* Loop/switch isn't completed */
        ai3[l6 + 20] = 1;
        i19;
        JVM INSTR lookupswitch 2: default 5831
    //                   0: 5774
    //                   3: 5764;
           goto _L48 _L49 _L50
_L48:
        break; /* Loop/switch isn't completed */
_L50:
        ai3;
        l6 + 21;
        0;
          goto _L51
_L49:
        l10 = (f(ai3[l6] - ai3[l6 + 2]) * 1000) / 32;
        ai3[l6 + 21] = l10;
        ai3;
        l6 + 12;
        ai3[l6] >= ai3[l6 + 2] ? -1 : 1;
_L51:
        JVM INSTR iastore ;
        break; /* Loop/switch isn't completed */
_L46:
        if(ai5[i3 + 14] > 500)
        {
            ai5[i3] = ai5[i3 + 2];
            ai5[i3 + 1] = ai5[i3 + 3];
            f(i3, 5);
        }
        break; /* Loop/switch isn't completed */
_L40:
        a(i3, a_d_array2d_static_fld[i9]);
        break; /* Loop/switch isn't completed */
_L43:
        a(i3, a_d_array2d_static_fld[i9]);
        ai3 = i3;
        if((aE_int_array1d_static_fld[ai3 + 11] & 3) != 0)
            break; /* Loop/switch isn't completed */
        switch(i9)
        {
        case 1: // '\001'
            f(i3, 201);
            break;

        case 3: // '\003'
            f(i3, 2);
            break;

        case 2: // '\002'
            ai5[i3 + 12] = k(l10);
            // fall through

        case 0: // '\0'
            f(i3, 3);
            break;
        }
        break; /* Loop/switch isn't completed */
_L47:
        a(i3, a_d_array2d_static_fld[i9]);
        if(ai5[i3 + 14] >= 1000)
            f(i3, 202);
        break; /* Loop/switch isn't completed */
_L41:
        if(i9 == 3)
            ai5[i3 + 12] = k(l10);
        a(i3, a_d_array2d_static_fld[i9]);
        break; /* Loop/switch isn't completed */
_L44:
        ai5[i3 + 12] = k(l10);
        a(0);
        g(i9, 4);
        a(l10, k12, bg, bh, bi, bj, i8 != -1);
        if(e())
            f(i3, 6);
        break; /* Loop/switch isn't completed */
_L45:
        if(ai5[i3 + 14] <= 500)
            break; /* Loop/switch isn't completed */
        switch(i9)
        {
        case 3: // '\003'
            f(i3, 2);
            break;

        case 0: // '\0'
            f(i3, 3);
            break;
        }
        int ai6[];
        int l12 = ai5[i3 + 8];
        boolean flag14 = true;
        if(l12 == 202 || l12 == 201 || l12 == 4)
            flag14 = false;
        if(i9 == 0 && l12 == 5)
            flag14 = false;
        if(!flag14)
            continue; /* Loop/switch isn't completed */
        ai3 = i3;
        i19 = (ai6 = aE_int_array1d_static_fld)[ai3];
        i8 = ai6[ai3 + 1];
        l10 = ai6[ai3 + 12];
        i3 = ai6[ai3 + 16];
        a(0);
        g(i3, 2);
        a(i19, i8, bg, bh, bi, bj, l10 != -1);
        if(e())
            c(d(i3, 1) << 16, B_int_static_fld - i19 >= 0 ? 1 : -1);
        g(i3, 1);
        int l4;
        if((l4 = a(i19, i8, bg, bh, bi, bj, l10 != -1)) != -1)
        {
            i8 = -1;
            switch(l4)
            {
            case 4: // '\004'
                i8 = 8;
                break;

            case 5: // '\005'
                i8 = 9;
                break;

            case 0: // '\0'
                i8 = 4;
                break;

            case 1: // '\001'
                i8 = 5;
                break;

            case 8: // '\b'
                i8 = 12;
                break;

            case 9: // '\t'
                i8 = 13;
                break;

            case 12: // '\f'
                i8 = 16;
                break;

            case 13: // '\r'
                i8 = 17;
                break;
            }
            ai6[ai3 + 13] -= d(i3, i8);
            i3 = ai6[ai3 + 13] > 0 ? 0 : 1;
            f(ai3, i3 == 0 ? 4 : 201);
            continue; /* Loop/switch isn't completed */
        }
        if(!a(1)) goto _L53; else goto _L52
_L52:
        g(i3, 3);
        a(i19, i8, bg, bh, bi, bj, l10 != -1);
        if(!e())
            continue; /* Loop/switch isn't completed */
        ai6;
        ai3 + 13;
        JVM INSTR dup2 ;
        JVM INSTR iaload ;
        int i5 = -1;
        w_int_static_fld;
        JVM INSTR lookupswitch 1: default 6639
    //                   7: 6632;
           goto _L54 _L55
_L55:
        i5 = d(i3, 20);
_L54:
        i5;
        JVM INSTR isub ;
        JVM INSTR iastore ;
        i3 = ai6[ai3 + 13] > 0 ? 0 : 1;
        f(ai3, i3 == 0 ? 4 : 201);
        x(0);
        continue; /* Loop/switch isn't completed */
_L53:
        g(i3, 3);
        a(i19, i8, bg, bh, bi, bj, l10 != -1);
        if(e())
        {
            gC = ai3 / 22;
            a(dj, i19, i8 - 48, 0);
        }
        as2++;
          goto _L56
_L37:
        y();
        M();
        if((p_int_static_fld & 1) != 0 && (!f_boolean_static_fld && !x_boolean_static_fld))
        {
            x_int_static_fld += b_int_static_fld;
            H_int_static_fld = 0;
            I_int_static_fld = 0x1100000;
            K_int_static_fld = a_d_array1d_static_fld[J_int_static_fld].a(K_int_static_fld, b_int_static_fld);
            if(w_int_static_fld == 11)
            {
                q();
            } else
            {
                i((int)(b_long_static_fld * 0x80000L >> 16));
                if(A_int_static_fld > 0)
                    A_int_static_fld -= b_int_static_fld;
                if(j_boolean_static_fld)
                    r();
                q();
                int l1 = B_int_static_fld;
                int j3 = C_int_static_fld;
                int j5 = E_int_static_fld;
                I_int_static_fld = 0x1100000;
                long l7;
                if(w_int_static_fld == 6 || w_int_static_fld == 8 && y_int_static_fld == 6)
                    l7 = 0xfffffffffff70000L;
                else
                if(w_int_static_fld == 7 && y_int_static_fld == 0)
                {
                    G_int_static_fld = 0;
                    l7 = 0L;
                } else
                {
                    l7 = -6553L;
                }
                long l9 = 50L;
                long l13 = b_long_static_fld;
                I_int_static_fld += (int)(l7 * (long)G_int_static_fld >> 16);
                while(l13 > 0L) 
                {
                    if((l13 -= l9) < 0L)
                        l9 += l13;
                    F_int_static_fld += (int)(l9 * (long)H_int_static_fld >> 16);
                    G_int_static_fld += (int)(l9 * (long)I_int_static_fld >> 16);
                    D_int_static_fld += (int)(l9 * (long)F_int_static_fld >> 16);
                    E_int_static_fld += (int)(l9 * (long)G_int_static_fld >> 16);
                }
                if(E_int_static_fld - j5 > 0xf0000)
                {
                    E_int_static_fld = j5 + 0xf0000;
                    G_int_static_fld = (int)(0xf00000000L / b_long_static_fld);
                }
                B_int_static_fld = D_int_static_fld + 32768 >> 16;
                C_int_static_fld = E_int_static_fld + 32768 >> 16;
                if(w_int_static_fld != 10)
                    d(l1, j3);
                ac_int_static_fld += b_int_static_fld;
            }
        }
        if(f_boolean_static_fld)
        {
            d(2);
        } else
        {
            H();
            J();
            if(J_boolean_static_fld)
                dp = k_d_array1d_static_fld[_flddo].a(dp, b_int_static_fld);
            E();
            if((p_int_static_fld & 0x20000) != 0 && w_int_static_fld != 10)
                b(e.a_int_static_fld, e.b, eI, eJ, true);
        }
_L35:
        if(j_int_static_fld != 16 && j_int_static_fld != 12 && j_int_static_fld != 14 && j_int_static_fld != 15 && j_int_static_fld != 11 && j_int_static_fld != 17 && j_int_static_fld != 18)
            switch(dB)
            {
            case 2: // '\002'
            default:
                break;

            case 1: // '\001'
                if((dC += b_int_static_fld) >= dw)
                {
                    dC -= dw;
                    dB = 2;
                }
                break;

            case 3: // '\003'
                if((dC += b_int_static_fld) >= dx)
                {
                    dC -= dx;
                    dB = 0;
                }
                break;
            }
        if((p_int_static_fld & 0x80) != 0)
        {
            M_boolean_static_fld = dB == 0;
            if(dB == 2)
            {
                byte byte0;
                e.c(byte0 = ((byte)((L_boolean_static_fld = c()) ? 3 : 0)));
                if(e.c == byte0 || (e.d & 0x20040) != 0)
                    if(!H_boolean_static_fld)
                        H_boolean_static_fld = true;
                    else
                    if(L_boolean_static_fld)
                    {
                        H_boolean_static_fld = false;
                        T();
                        c(da);
                    } else
                    {
                        M_boolean_static_fld = true;
                    }
            }
            if(M_boolean_static_fld && j_int_static_fld == 7)
                d();
            if(dB == 0 && j_int_static_fld == 7)
                d(1);
        }
        if((p_int_static_fld & 8) != 0)
            switch(j_int_static_fld)
            {
            case 5: // '\005'
            case 6: // '\006'
            case 7: // '\007'
            case 8: // '\b'
            case 9: // '\t'
            case 10: // '\n'
            case 13: // '\r'
            default:
                break;

            case 4: // '\004'
                if(dB == 2)
                    e.c(0);
                if(dM == -1)
                {
                    if((dL = a()) != -1)
                        dM = dL;
                    if(e.c == 0)
                        dM = cH;
                }
                switch(dM)
                {
                case 1: // '\001'
                    k_int_static_fld = 16;
                    break;

                case 2: // '\002'
                    ei = 2;
                    e(false);
                    ak();
                    break;

                case 3: // '\003'
                    az();
                    ak();
                    break;

                case 4: // '\004'
                    if(dN == 8)
                        k_int_static_fld = 18;
                    else
                        k_int_static_fld = 14;
                    break;

                case 6: // '\006'
                    k_int_static_fld = 11;
                    break;

                case 0: // '\0'
                    if(dB == 2)
                        a(false);
                    else
                    if(dB == 0)
                        k_int_static_fld = dN;
                    break;

                case 5: // '\005'
                    k_int_static_fld = 12;
                    break;
                }
                if(dB == 0)
                    al();
                break;

            case 12: // '\f'
                aa();
                break;

            case 11: // '\013'
                Z();
                break;

            case 14: // '\016'
            case 15: // '\017'
            case 17: // '\021'
            case 18: // '\022'
                ae();
                break;

            case 16: // '\020'
                ay();
                break;
            }
        if((p_int_static_fld & 0x40) != 0)
            am();
        if((p_int_static_fld & 0x400) != 0)
            if(c_boolean_static_fld)
            {
                c_boolean_static_fld = b();
            } else
            {
                p_int_static_fld = o_int_static_fld;
                if(j_int_static_fld == 3)
                    k();
                if(j_int_static_fld == 9)
                    h();
            }
        if(j_int_static_fld == 6 && !s_boolean_static_fld)
            d(1);
        n_int_static_fld += a_int_static_fld;
        m_int_static_fld += b_int_static_fld;
        break; /* Loop/switch isn't completed */
_L27:
        l();
        break; /* Loop/switch isn't completed */
_L2:
        au();
        break; /* Loop/switch isn't completed */
_L3:
        E();
        ab();
        break; /* Loop/switch isn't completed */
_L4:
        E();
        ay();
        break; /* Loop/switch isn't completed */
_L5:
        ao();
        break; /* Loop/switch isn't completed */
_L7:
        at();
        aE();
        return;
        if(true) goto _L58; else goto _L57
_L57:
    }

    protected final void a()
    {
        Z_boolean_static_fld = e.a();
        aa_boolean_static_fld = e.c();
        C();
        try
        {
            a_char_array1d_static_fld = new char[256];
            d_a_array1d_static_fld = new a[5];
            a_byte_array2d_static_fld = new byte[5][];
            b_byte_array2d_static_fld = new byte[5][];
            a_short_array2d_static_fld = new short[5][];
            al_int_array1d_static_fld = new int[30];
            this = new int[5];
            e.a("/b.mbf");
            int i1 = 0;
            for(int j1 = 0; j1 < 5; j1++)
            {
                int k1 = j1 << 2;
                if(o_int_array1d_static_fld[k1] != 1)
                    continue;
                STDHMidlet stdhmidlet = this;
                int j2 = j1;
                int i2 = i1;
                k1 = o_int_array1d_static_fld[k1 + 3];
                int i3 = i2 * 6;
                al_int_array1d_static_fld[i3 + 5] = j2;
                Object obj;
                j2 = e.a(((DataInputStream) (obj = e.a(k1))));
                al_int_array1d_static_fld[i3] = ((DataInputStream) (obj)).readUnsignedByte();
                al_int_array1d_static_fld[i3 + 1] = ((DataInputStream) (obj)).readUnsignedByte();
                int j3 = ((DataInputStream) (obj)).readUnsignedByte();
                al_int_array1d_static_fld[i3 + 2] = j3;
                int k3;
                int ai1[] = new int[k3 = ((DataInputStream) (obj)).readUnsignedByte()];
                int ai2[] = new int[k3];
                byte abyte0[] = new byte[k3];
                int l3 = 0;
                for(int i4 = 0; i4 < k3; i4++)
                {
                    ai1[i4] = ((DataInputStream) (obj)).readUnsignedShort();
                    ai2[i4] = ((DataInputStream) (obj)).readUnsignedByte();
                    abyte0[i4] = ((DataInputStream) (obj)).readByte();
                    if((ai1[i4] & 0xffffff00) != 0)
                        l3++;
                }

                a_byte_array2d_static_fld[i2] = new byte[256];
                b_byte_array2d_static_fld[i2] = new byte[256];
                if(l3 != 0)
                    a_short_array2d_static_fld[i2] = new short[l3 * 3];
                int j4 = 0;
                for(int l1 = 0; l1 < k3; l1++)
                    if((ai1[l1] & 0xffffff00) == 0)
                    {
                        a_byte_array2d_static_fld[i2][ai1[l1]] = (byte)ai2[l1];
                        b_byte_array2d_static_fld[i2][ai1[l1]] = abyte0[l1];
                    } else
                    {
                        a_short_array2d_static_fld[i2][j4++] = (short)ai1[l1];
                        a_short_array2d_static_fld[i2][j4++] = (short)ai2[l1];
                        a_short_array2d_static_fld[i2][j4++] = abyte0[l1];
                    }

                l1 = null;
                for(k3 = 0; k3 < i2 && l1 == null; k3++)
                    if(stdhmidlet[k3] == j2)
                    {
                        l1 = d_a_array1d_static_fld[k3];
                        d_a_array1d_static_fld[i2] = l1;
                    }

                if(l1 == null)
                {
                    l1 = a(j2, ((byte []) (null)), ((byte []) (null)), false, false);
                    d_a_array1d_static_fld[i2] = l1;
                    stdhmidlet[i2] = j2;
                }
                k3 = 0x7fffffff;
                i2 = 0;
                for(int k2 = 0; k2 < ((a) (l1)).a_int_fld; k2++)
                {
                    int l2;
                    if((l2 = l1.a(k2)) < k3)
                        k3 = l2;
                    if(l2 > i2)
                        i2 = l2;
                }

                al_int_array1d_static_fld[i3 + 3] = k3 + j3;
                al_int_array1d_static_fld[i3 + 4] = i2 + j3;
                i1++;
            }

            e.e();
        }
        catch(Exception _ex) { }
        D(0);
        e.f();
        try
        {
            if((this = e.a("p", 1)) == null)
                throw new IOException();
            DataInputStream datainputstream;
            o_boolean_static_fld = (datainputstream = new DataInputStream(new ByteArrayInputStream(this))).readBoolean();
            p_boolean_static_fld = datainputstream.readBoolean();
            a_java_lang_String_static_fld = datainputstream.readUTF();
        }
        catch(Exception _ex)
        {
            o_boolean_static_fld = true;
            p_boolean_static_fld = true;
            a_java_lang_String_static_fld = "";
        }
        try
        {
            ax();
        }
        catch(Exception _ex) { }
        A();
        B();
        dA = (dy = (20 * e.b) / 100) + 4;
        d_int_static_fld = 1;
    }

    protected final void b()
    {
        b_boolean_static_fld = false;
        W_boolean_static_fld = e.b();
        e.a(false);
        e.a(false);
        if(c_int_static_fld != 1 && a_java_lang_String_static_fld != "")
            b_boolean_static_fld = true;
        if(c_int_static_fld == 6 && (j_int_static_fld == 1 && !c_boolean_static_fld || j_int_static_fld == 8 && M_boolean_static_fld || j_int_static_fld == 6))
        {
            k_int_static_fld = 4;
            l();
        }
    }

    protected final void c()
    {
        e.c();
    }

    protected final void d()
    {
        C();
    }

    protected final void e()
    {
        a_long_static_fld = ((long)a_int_static_fld << 16) / 1000L;
        b_long_static_fld = ((long)b_int_static_fld << 16) / 1000L;
        if(!b_boolean_static_fld)
            if(d_int_static_fld == 0)
            {
                g_int_static_fld += a_int_static_fld;
                f_int_static_fld += b_int_static_fld;
                i();
                return;
            } else
            {
                j();
                return;
            }
        this = 1;
        if(e.a_boolean_static_fld)
        {
            if(c_int_static_fld != 6)
                e.a(W_boolean_static_fld);
            if(o_boolean_static_fld)
            {
                e.a(true);
                if(c_int_static_fld == 28 && q_int_static_fld != 11 && (dX == 0 || dX == 1))
                    e(0, 1);
            }
            e.b(false);
            e.b(p_boolean_static_fld);
            this = 0;
            e.c();
            K_boolean_static_fld = true;
        }
        b_boolean_static_fld = this;
    }

    private static void j()
    {
        if((e_int_static_fld = c_int_static_fld) == 6)
        {
            m();
            j_int_static_fld = 0;
            k_int_static_fld = 0;
            l_int_static_fld = 0;
        }
        if(e_int_static_fld == 28)
            n();
        c_int_static_fld = d_int_static_fld;
        d_int_static_fld = 0;
        f_int_static_fld = 0;
        g_int_static_fld = 0;
        String as3[];
        switch(c_int_static_fld)
        {
        case 10: // '\n'
            t();
            if(ae_int_static_fld == 0 && b_java_lang_String_array1d_static_fld[ag_int_static_fld] == null)
            {
                v();
                return;
            } else
            {
                l(ag_int_static_fld);
                return;
            }

        case 28: // '\034'
            if(e_boolean_static_fld)
            {
                e_boolean_static_fld = false;
                boolean flag = false;
                r_int_static_fld = u_int_static_fld;
                return;
            } else
            {
                boolean flag1 = false;
                r_int_static_fld = 1;
                return;
            }

        case 24: // '\030'
            x();
            if(a(2) > 0)
            {
                boolean flag2 = false;
                d_int_static_fld = 10;
                return;
            } else
            {
                b.a_boolean_static_fld = true;
                return;
            }

        case 25: // '\031'
            String as1[] = {
                c(11)
            };
            int ai1[] = {
                0, 0
            };
            a(as1, ai1, ((a) (null)), 0, 0, aH, aI - b_a_static_fld.b(0), 3, true);
            e.c(0);
            e.c(4);
            b(false);
            a(da, true, true);
            return;

        case 27: // '\033'
            aq();
            return;

        case 1: // '\001'
            try
            {
                c_javax_microedition_lcdui_Image_static_fld = e.a("d.png");
            }
            catch(Exception _ex) { }
            ec = 0;
            ed = 0;
            ee = 0xffffff;
            Y_boolean_static_fld = false;
            return;

        case 2: // '\002'
            int i1;
            String as2[] = new String[i1 = eg];
            int ai2[] = new int[i1];
            for(int k1 = 0; k1 != i1; k1++)
            {
                as2[k1] = i_java_lang_String_array1d_static_fld[k1];
                ai2[k1] = 0;
            }

            a(((String) (null)), as2, ai2, dI, 0, aH, 2, 2, 0);
            b(false);
            a(cI, true, true);
            cN = dA;
            e.a();
            e.c(0);
            return;

        case 3: // '\003'
            A(0);
            return;

        case 4: // '\004'
            an();
            return;

        case 6: // '\006'
            d_boolean_static_fld = false;
            k();
            return;

        case 7: // '\007'
            e.a();
            x();
            int j1 = h_int_static_fld;
            e.a();
            av_int_static_fld = 0;
            dZ = j1;
            String s2 = g_java_lang_String_array1d_static_fld[dZ];
            ea = aj_int_array1d_static_fld[dZ];
            dY = 0;
            X_boolean_static_fld = false;
            eb = 0;
            try
            {
                e.a("/b.mbf");
                if(g_java_lang_String_array1d_static_fld[dZ] != null)
                    a_java_io_DataInputStream_static_fld = e.a(s2);
                a_a_static_fld = a(174, ((byte []) (null)), ((byte []) (null)), false, true);
                a_d_static_fld = d.a(73, 1);
                L_int_static_fld = 1;
                if(g_java_lang_String_array1d_static_fld[dZ] == null)
                {
                    boolean flag3 = false;
                    gv = 0;
                    gu = 0;
                    gz = 0;
                    ae_boolean_static_fld = false;
                    F(0);
                    e.e();
                }
            }
            catch(IOException _ex) { }
            as3 = new String[1];
            int l1 = c(0, 5);
            String s1 = null;
            switch(l1)
            {
            case 0: // '\0'
                s1 = c(40);
                break;

            case 1: // '\001'
                s1 = c(41);
                break;

            case 2: // '\002'
                s1 = c(43);
                break;

            case 3: // '\003'
                s1 = c(76);
                break;

            case 4: // '\004'
                s1 = c(42);
                break;

            case 5: // '\005'
                s1 = c(44);
                break;
            }
            as3[0] = s1;
            a(as3, ((int []) (null)), ((a) (null)), 0, 0, aH, aI - b_a_static_fld.b(0), 3, true);
            // fall through

        case 5: // '\005'
        case 8: // '\b'
        case 9: // '\t'
        case 11: // '\013'
        case 12: // '\f'
        case 13: // '\r'
        case 14: // '\016'
        case 15: // '\017'
        case 16: // '\020'
        case 17: // '\021'
        case 18: // '\022'
        case 19: // '\023'
        case 20: // '\024'
        case 21: // '\025'
        case 22: // '\026'
        case 23: // '\027'
        case 26: // '\032'
        default:
            return;
        }
    }

    protected final void f()
    {
label0:
        {
label1:
            {
                if(b_boolean_static_fld)
                    break label0;
                if(c_int_static_fld != 1)
                    D(0);
label2:
                switch(c_int_static_fld)
                {
                case 5: // '\005'
                case 8: // '\b'
                case 9: // '\t'
                case 11: // '\013'
                case 12: // '\f'
                case 13: // '\r'
                case 14: // '\016'
                case 15: // '\017'
                case 16: // '\020'
                case 17: // '\021'
                case 18: // '\022'
                case 19: // '\023'
                case 20: // '\024'
                case 21: // '\025'
                case 22: // '\026'
                case 23: // '\027'
                case 24: // '\030'
                case 26: // '\032'
                default:
                    break label1;

                case 10: // '\n'
                    p(m_boolean_static_fld ? 0xff331166 : ah_int_static_fld);
                    D(0);
                    if(m_boolean_static_fld)
                    {
                        C(-1);
                        a(a(c(54), aH - 10), 0, aJ, aK, 3);
                    } else
                    {
                        this = a_java_lang_String_array2d_static_fld[ag_int_static_fld] != null ? ((STDHMidlet) ((eR * 25) / 10)) : 0;
                        int i1 = aI - this - b_a_static_fld.b(0) - 3;
                        if(a_javax_microedition_lcdui_Image_static_fld != null)
                            e.a_javax_microedition_lcdui_Graphics_static_fld.drawImage(a_javax_microedition_lcdui_Image_static_fld, aH - a_javax_microedition_lcdui_Image_static_fld.getWidth() >> 1, i1 - a_javax_microedition_lcdui_Image_static_fld.getHeight() >> 1, 0);
                        if(this > 0)
                        {
                            C(0xffa0a0ff);
                            e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, i1, aH, this);
                            C(-1);
                            boolean flag2 = false;
                            int i9 = i1 + (this + eS >> 1);
                            int l5 = ai_int_static_fld >> 16;
                            String s1 = a_java_lang_String_array2d_static_fld[ag_int_static_fld][ad_int_static_fld];
                            switch(eT)
                            {
                            case 1: // '\001'
                                boolean flag3 = false;
                                int k17 = i9;
                                int l15 = l5;
                                String s2 = s1;
                                int l19 = s1.length();
                                s2.getChars(0, l19, a_char_array1d_static_fld, 0);
                                a(a_char_array1d_static_fld, 0, l19, l15, k17, 68);
                                // fall through

                            default:
                                C(0xff000000);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.drawRect(0, i1, aH - 1, this - 1);
                                C(-128);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.drawRect(0, i1 + 1, aH - 2, this - 2);
                                break;
                            }
                        }
                    }
                    break label1;

                case 28: // '\034'
                    switch(q_int_static_fld)
                    {
                    case 1: // '\001'
                        N();
                        this = e.a_int_static_fld / 2;
                        int j1 = (50 * e.b) / 100;
                        b_d_static_fld.a(1, j_a_static_fld, this, j1, 0);
                        c_d_static_fld.a(1, k_a_static_fld, this, j1, 0);
                        P();
                        break;

                    case 2: // '\002'
                        N();
                        break label2;

                    case 3: // '\003'
                        aA();
                        break;

                    case 4: // '\004'
                        N();
                        P();
                        break;

                    case 5: // '\005'
                        N();
                        break label2;

                    case 7: // '\007'
                        ap();
                        break;

                    case 10: // '\n'
                        N();
                        break label2;

                    case 11: // '\013'
                        as();
                        break;

                    case 8: // '\b'
                        N();
                        S();
                        break;
                    }
                    break label1;

                case 25: // '\031'
                    p(0xff000000);
                    N();
                    break;

                case 27: // '\033'
                    as();
                    break label1;

                case 6: // '\006'
                    switch(j_int_static_fld)
                    {
                    case 10: // '\n'
                        ap();
                        break;

                    case 19: // '\023'
                        p(0);
                        N();
                        break label2;

                    case 20: // '\024'
                        p(0);
                        N();
                        break label2;

                    case 1: // '\001'
                    case 2: // '\002'
                    case 3: // '\003'
                    case 4: // '\004'
                    case 6: // '\006'
                    case 7: // '\007'
                    case 8: // '\b'
                    case 9: // '\t'
                    case 11: // '\013'
                    case 12: // '\f'
                    case 14: // '\016'
                    case 15: // '\017'
                    case 16: // '\020'
                    case 17: // '\021'
                    case 18: // '\022'
                        b(0);
                        if((p_int_static_fld & 0x10000) != 0)
                            aJ();
                        if((p_int_static_fld & 0x2000) == 0)
                        {
                            this = b(2);
                            int j9 = aI;
                            int i6 = aH;
                            int l2 = aO;
                            int k1 = aN;
                            eK = -l2 % eH;
                            eL = (l2 / eH) * eE;
                            eM = -k1 % eG;
                            eN = k1 / eG;
                            eO = eI - k1;
                            eP = eJ - l2;
                            if(eN < 0)
                            {
                                eM += -eN * eG;
                                eN = 0;
                            }
                            if(eL < 0)
                            {
                                eK += -(eL / eG) * eG;
                                eL = 0;
                            }
                            if(eO > i6)
                                eO = i6;
                            if(eP > j9)
                                eP = j9;
                            k1 = i_int_array1d_static_fld[2];
                            i6 = (l2 = i_int_array1d_static_fld[3]) / 2 + ar_int_static_fld;
                            j9 = b_javax_microedition_lcdui_Image_static_fld.getHeight() / 2;
                            if(i6 > 0)
                            {
                                C(ao_int_static_fld);
                                int k11 = i6 <= l2 ? i6 : l2;
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, k1, k11 - j9);
                            }
                            if(i6 < l2)
                            {
                                C(ap_int_static_fld);
                                int l11 = i6 >= 0 ? i6 : 0;
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, l11 + j9, k1, l2 - i6);
                            }
                            if(!n_boolean_static_fld)
                            {
                                C(0xff000000);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, e.a_javax_microedition_lcdui_Graphics_static_fld.getClipWidth(), e.a_javax_microedition_lcdui_Graphics_static_fld.getClipHeight());
                            } else
                            {
                                int i12 = -aq_int_static_fld % b_javax_microedition_lcdui_Image_static_fld.getWidth();
                                int k14 = i6 - b_javax_microedition_lcdui_Image_static_fld.getHeight() / 2;
                                for(; i12 < k1; i12 += b_javax_microedition_lcdui_Image_static_fld.getWidth())
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.drawImage(b_javax_microedition_lcdui_Image_static_fld, i12, k14, 0);

                            }
                            for(k1 = 0; k1 != am_int_static_fld; k1++)
                            {
                                l2 = k1 * 6;
                                int j6 = d_int_array1d_static_fld[l2];
                                j9 = d_int_array1d_static_fld[l2 + 1] - aO;
                                if((j6 -= aN) >= aR || j9 >= aS)
                                    continue;
                                int j12 = (j6 + d_int_array1d_static_fld[l2 + 2]) - 1;
                                int l14 = (j9 + d_int_array1d_static_fld[l2 + 3]) - 1;
                                if(j12 < 0 || l14 < 0)
                                    continue;
                                if(j6 < 0)
                                    j6 = 0;
                                if(j12 >= aR)
                                {
                                    j12 = aR;
                                    j12--;
                                }
                                if(j9 < 0)
                                    j9 = 0;
                                if(l14 >= aS)
                                {
                                    l14 = aS;
                                    l14--;
                                }
                                int i16 = 0;
                                i16 = j12 - j6;
                                i16++;
                                int l17 = 0;
                                l17 = l14 - j9;
                                l17++;
                                C(d_int_array1d_static_fld[l2 + 4]);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(j6, j9, i16, l17);
                            }

                            l2 = aO;
                            k1 = aN;
                            j9 = eK;
                            int k12 = eL;
                            for(int i15 = (l2 + j9) / 16; j9 < eP; i15++)
                            {
                                int j16 = eM;
                                int i18 = (k1 + j16) / 16;
                                int i19 = k12 + eN;
                                while(j16 < eO) 
                                {
                                    int i20 = (e_byte_array1d_static_fld[i19++] & 0xff) << 1;
                                    boolean flag1 = (b(i18, i15) & 0x40) == 0;
                                    byte byte0;
                                    if(i20 != 510 && flag1)
                                        if((byte0 = d_byte_array1d_static_fld[i20++]) >= 0)
                                        {
                                            c_a_array1d_static_fld[byte0].a(d_byte_array1d_static_fld[i20], j16, j9);
                                        } else
                                        {
                                            int k6 = -byte0 - 1;
                                            i20 = d_byte_array1d_static_fld[i20];
                                            m_d_array1d_static_fld[i20].a(ak_int_array1d_static_fld[i20], c_a_array1d_static_fld[k6], j16, j9, 0);
                                        }
                                    j16 += eG;
                                    i18++;
                                }
                                j9 += eH;
                                k12 += eE;
                            }

                            if(bV != 0 && B_boolean_static_fld)
                                for(k1 = 0; k1 < Z_int_array1d_static_fld.length; k1++)
                                {
                                    int i3 = Z_int_array1d_static_fld[k1];
                                    if(!C_boolean_static_fld)
                                        continue;
                                    int k9 = i3;
                                    int l12 = W_int_array1d_static_fld[k9 << 1] >> 16;
                                    int j15 = W_int_array1d_static_fld[(k9 << 1) + 1] >> 16;
                                    l12 -= aN;
                                    j15 -= aO;
                                    int k16 = aa_int_array1d_static_fld[k9 << 1];
                                    int j18;
                                    if(((j18 = aa_int_array1d_static_fld[(k9 << 1) + 1]) & 4) != 0)
                                        continue;
                                    if(j18 == 1 || j18 == 3)
                                        j_d_array1d_static_fld[k16].a(S_int_array1d_static_fld[k16], g_a_static_fld, l12, j15, 0);
                                    if(j18 == 2 || j18 == 3)
                                        j_d_array1d_static_fld[k16].a(S_int_array1d_static_fld[k16], g_a_static_fld, l12, j15, 4);
                                }

                            D();
                            for(k1 = 0; k1 != gB; k1++)
                            {
                                int j3 = k1 * 22;
                                int l6 = 1;
                                if(aE_int_array1d_static_fld[j3 + 17] != -1)
                                    l6 = (aE_int_array1d_static_fld[j3 + 17] / 62) % 2 != 0 ? 0 : 1;
                                if(!l6)
                                    continue;
                                int i13 = j3;
                                int ai1[];
                                if((ai1 = aE_int_array1d_static_fld)[i13 + 8] == 202 || (ai1[i13 + 9] & aT) == 0)
                                    continue;
                                int l16 = ai1[i13 + 16];
                                int k18 = ai1[i13 + 8];
                                g(l16, 0);
                                a(ai1[i13], ai1[i13 + 1], bg, bh, bi, bj, false);
                                if(!e())
                                    continue;
                                int j19 = ai1[i13];
                                int j20 = ai1[i13 + 1];
                                j3 = ai1[i13 + 12];
                                if(k18 == 5 || k18 == 6 || k18 == 7)
                                    continue;
                                l6 = 0;
                                if(l16 != 1 && j3 == 1)
                                    l6 = 4;
                                a a1 = a_a_array1d_static_fld[l16];
                                d ad1[] = a_d_array2d_static_fld[l16];
                                byte byte1 = l6;
                                j20 = j20 - aO;
                                l6 = j19 - aN;
                                j3 = i13;
                                l16 = aE_int_array1d_static_fld[j3 + 10];
                                j3 = aE_int_array1d_static_fld[j3 + 11];
                                ad1[l16].a(j3, a1, l6, j20, byte1);
                            }

                            D();
                            for(k1 = 0; k1 != bs; k1++)
                            {
                                int k3 = k1 * 11;
                                int i7 = B_int_array1d_static_fld[k3];
                                int l9 = B_int_array1d_static_fld[k3 + 1];
                                if((B_int_array1d_static_fld[k3 + 8] & aT) == 0)
                                    continue;
                                a(i7, l9, -16, 16, -16, 16, false);
                                if(e())
                                {
                                    int j13 = B_int_array1d_static_fld[k3 + 5];
                                    byte byte3 = ((byte)(B_int_array1d_static_fld[k3 + 7] != 0 ? 4 : 0));
                                    int i17 = j13 + byte3;
                                    e_d_array1d_static_fld[i17].a(B_int_array1d_static_fld[k3 + 6], c_a_static_fld, i7 - aN, l9 - aO, 0);
                                }
                            }

                            D();
                            for(k1 = 0; k1 != bu; k1++)
                            {
                                int l3 = k1 * 9;
                                int j7 = C_int_array1d_static_fld[l3];
                                int i10 = C_int_array1d_static_fld[l3 + 1];
                                if((C_int_array1d_static_fld[l3 + 7] & aT) == 0)
                                    continue;
                                a(j7, i10, -32, 32, -32, 8, false);
                                if(e())
                                    f_d_array1d_static_fld[C_int_array1d_static_fld[l3 + 5]].a(C_int_array1d_static_fld[l3 + 6], c_a_static_fld, j7 - aN, i10 - aO, 0);
                            }

                            D();
                            for(k1 = 0; k1 != bx; k1++)
                            {
                                int i4 = k1 * 6;
                                int k7 = I_int_array1d_static_fld[i4];
                                int j10 = I_int_array1d_static_fld[i4 + 1];
                                a(k7, j10, -16, 16, -32, 0, false);
                                if(e())
                                {
                                    int k13 = I_int_array1d_static_fld[i4 + 2];
                                    h_d_array1d_static_fld[c(k13)].a(I_int_array1d_static_fld[i4 + 4], c_a_static_fld, k7 - aN, j10 - aO, 0);
                                }
                            }

                            for(k1 = 0; k1 < 8; k1++)
                            {
                                int j4 = k1 << 4;
                                if(L_int_array1d_static_fld[j4] != 0)
                                {
                                    int l7 = L_int_array1d_static_fld[j4 + 5] / 10;
                                    int k10 = L_int_array1d_static_fld[j4 + 5] / 6;
                                    int l13 = L_int_array1d_static_fld[j4 + 5] - (l7 + k10 << 1);
                                    C(L_int_array1d_static_fld[j4 + 12]);
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(L_int_array1d_static_fld[j4 + 2] - (l13 >> 1) - l7 - k10 - aN, L_int_array1d_static_fld[j4 + 4] - L_int_array1d_static_fld[j4 + 7] - aO, l7, L_int_array1d_static_fld[j4 + 7]);
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect((L_int_array1d_static_fld[j4 + 2] + (l13 >> 1) + k10) - aN, L_int_array1d_static_fld[j4 + 4] - L_int_array1d_static_fld[j4 + 7] - aO, l7, L_int_array1d_static_fld[j4 + 7]);
                                    C(L_int_array1d_static_fld[j4 + 11]);
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(L_int_array1d_static_fld[j4 + 2] - (l13 >> 1) - k10 - aN, L_int_array1d_static_fld[j4 + 4] - L_int_array1d_static_fld[j4 + 7] - aO, k10, L_int_array1d_static_fld[j4 + 7]);
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect((L_int_array1d_static_fld[j4 + 2] + (l13 >> 1)) - aN, L_int_array1d_static_fld[j4 + 4] - L_int_array1d_static_fld[j4 + 7] - aO, k10, L_int_array1d_static_fld[j4 + 7]);
                                    C(L_int_array1d_static_fld[j4 + 10]);
                                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(L_int_array1d_static_fld[j4 + 2] - (l13 >> 1) - aN, L_int_array1d_static_fld[j4 + 4] - L_int_array1d_static_fld[j4 + 7] - aO, l13, L_int_array1d_static_fld[j4 + 7]);
                                }
                            }

                            k1 = w_int_array1d_static_fld.length;
                            do
                            {
                                if((k1 -= 8) < 0)
                                    break;
                                if(w_int_array1d_static_fld[k1] != 0)
                                {
                                    int k4 = (w_int_array1d_static_fld[k1 + 2] + 32768 >> 16) - aN;
                                    int i8 = w_int_array1d_static_fld[k1 + 4] - aO;
                                    byte byte2 = ((byte)(w_int_array1d_static_fld[k1 + 6] >= 0 ? 0 : 4));
                                    d_d_array1d_static_fld[w_int_array1d_static_fld[k1 + 1]].a(w_int_array1d_static_fld[k1 + 7], b_a_array1d_static_fld[0], k4, i8, byte2);
                                }
                            } while(true);
                            if((p_int_static_fld & 2) != 0 && !y_boolean_static_fld)
                            {
                                boolean flag = true;
                                if(A_int_static_fld > 0)
                                    flag = (A_int_static_fld / 200) % 2 == 0;
                                else
                                if(w_int_static_fld == 11 && v_int_static_fld >= 2)
                                    flag = false;
                                if(flag)
                                {
                                    int l4 = z_int_static_fld;
                                    a_d_array1d_static_fld[J_int_static_fld].a(K_int_static_fld, a_a_static_fld, B_int_static_fld - aN, C_int_static_fld - aO, l4 >= 0 ? 0 : 4);
                                }
                            }
                            D();
                            for(int l1 = 0; l1 != bC; l1++)
                            {
                                int i5 = l1 * 6;
                                int j8 = J_int_array1d_static_fld[i5];
                                int l10 = J_int_array1d_static_fld[i5 + 1];
                                a(j8, l10, -16, 16, -32, 16, false);
                                if(e())
                                {
                                    int i14 = J_int_array1d_static_fld[i5 + 5];
                                    Object obj = null;
                                    i_d_array1d_static_fld[J_int_array1d_static_fld[i5 + 4]].a(i14, c_a_static_fld, j8 - aN, l10 - aO, 0);
                                }
                            }

                            I();
                            D();
                            for(int i2 = 0; i2 != bw; i2++)
                            {
                                int j5 = i2 * 10;
                                if(G_int_array1d_static_fld[j5 + 6] == 1 || G_int_array1d_static_fld[j5 + 6] == 2)
                                    continue;
                                int k8 = G_int_array1d_static_fld[j5];
                                int i11 = G_int_array1d_static_fld[j5 + 1];
                                c(k8, i11, G_int_array1d_static_fld[j5 + 2]);
                                if(e())
                                {
                                    d d1 = g_d_array1d_static_fld[G_int_array1d_static_fld[j5 + 4]];
                                    a a2 = f_a_static_fld;
                                    d1.a(G_int_array1d_static_fld[j5 + 5], a2, k8 - aN, i11 - aO, 0);
                                }
                            }

                            if(y_boolean_static_fld)
                            {
                                int j2 = bQ * 6;
                                if(x_boolean_static_fld && J_int_array1d_static_fld[j2 + 2] != 3)
                                    i_d_array1d_static_fld[5].a(bR, c_a_static_fld, bF - aN, bG - aO, 0);
                            }
                            if((p_int_static_fld & 0x10) == 0)
                                K();
                            X();
                            if(bV != 0)
                            {
                                C(0x553355);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(43, 32, 40, 1);
                                C(0x664466);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(43, 33, 40, 2);
                                C(0x991100);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(43, 32, cy >> 16, 1);
                                C(0xcc2200);
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(43, 33, cy >> 16, 2);
                            }
                            if(J_boolean_static_fld)
                                k_d_array1d_static_fld[_flddo].a(dp, h_a_static_fld, dq - aN, dr - aO, 0);
                            b(this);
                        }
                        if((p_int_static_fld & 0x20) != 0)
                        {
                            C(0xff000000);
                            e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, aH, aI);
                        }
                        c(false);
                        if((p_int_static_fld & 0x100) != 0 && dB == 2)
                            S();
                        if((p_int_static_fld & 0x800) != 0)
                        {
                            C(0xff000000);
                            if(cz == 1)
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(cB, 0, aH - cB, aI);
                            else
                            if(cz == 0 && cA == 500)
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, aH, aI);
                            else
                                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, cB, aI);
                        }
                        if((p_int_static_fld & 0x10) != 0)
                            switch(j_int_static_fld)
                            {
                            case 5: // '\005'
                            case 6: // '\006'
                            case 7: // '\007'
                            case 8: // '\b'
                            case 9: // '\t'
                            case 10: // '\n'
                            case 13: // '\r'
                            default:
                                break;

                            case 4: // '\004'
                                if(dB == 2)
                                    P();
                                break;

                            case 12: // '\f'
                                N();
                                S();
                                break;

                            case 11: // '\013'
                                N();
                                S();
                                break;

                            case 14: // '\016'
                            case 15: // '\017'
                            case 17: // '\021'
                            case 18: // '\022'
                                N();
                                S();
                                break;

                            case 16: // '\020'
                                aA();
                                break;
                            }
                        if((p_int_static_fld & 0x20) != 0 && dB == 2)
                            P();
                        break;
                    }
                    break label1;

                case 1: // '\001'
                    p(ee);
                    e.a_javax_microedition_lcdui_Graphics_static_fld.drawImage(c_javax_microedition_lcdui_Image_static_fld, aJ, aK, 3);
                    break label1;

                case 2: // '\002'
                    p(0xff000000);
                    cN = dA;
                    N();
                    P();
                    break label1;

                case 3: // '\003'
                    aA();
                    break label1;

                case 4: // '\004'
                    ap();
                    break label1;

                case 7: // '\007'
                    b(0);
                    p(0xff000000);
                    this = 26;
                    if(g_java_lang_String_array1d_static_fld[dZ] == null)
                    {
                        this = az_int_array1d_static_fld.length;
                        aJ();
                    }
                    int k2 = aI;
                    String as1[] = null;
                    as1 = a(a(dZ), aH);
                    k2 = k2 - eR * as1.length - eR;
                    int l8 = ((k2 -= 8) << 1) >> 5;
                    p(0xff000000);
                    int j11 = a(as1);
                    int l18 = eR * as1.length;
                    int j17 = j11;
                    int k15 = l8 - 2;
                    int j14 = aH - j11 >> 1;
                    int ai2[] = {
                        0, -1, 0xff000000
                    };
                    for(int k20 = 0; k20 < ai2.length; k20++)
                    {
                        C(ai2[k20]);
                        e.a_javax_microedition_lcdui_Graphics_static_fld.drawRect(j14 - 3 - k20, k15 - 3 - k20, j17 + 6 + (k20 << 1), l18 + 6 + (k20 << 1));
                    }

                    C(0);
                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect((j14 - 3) + 1, (k15 - 3) + 1, j17 + 6, l18 + 6);
                    D(0);
                    a(as1, 0, aJ, l8, 17);
                    D(2);
                    C(-1);
                    int l20 = dY;
                    int k19 = (dY << 16) / this;
                    j17 = aH;
                    k15 = aI - 8;
                    int k5 = 0;
                    if((l8 = (int)((long)(j17 << 16) * (long)k19 >> 16) + 32768 >> 16) < 0)
                        l8 = 0;
                    else
                    if(l8 > j17)
                        l8 = j17;
                    if(l20 == 1)
                        k5 = 10;
                    else
                        k5 = l8 - -10;
                    if(l20 > 0)
                    {
                        C(-1);
                        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, k15, l8, 2);
                        a_d_static_fld.a(L_int_static_fld, a_a_static_fld, k5 + eb, k15, 0);
                    }
                    break;
                }
                S();
            }
            if(c_int_static_fld != 0 && c_int_static_fld != 1 && c_int_static_fld != 7 && !c_boolean_static_fld)
            {
                b(0);
                b(e.a(0), 8, aI - 2);
                b(e.a(1), aH - 8, aI - 2);
            }
            return;
        }
        b(0);
        p(0xff000000);
        D(0);
        a(a(c(6), aH), 0, aJ, aK, 3);
    }

    protected final void g()
    {
        if(!b_boolean_static_fld && d_int_static_fld != 0)
        {
            switch(c_int_static_fld)
            {
            case 3: // '\003'
            case 5: // '\005'
            case 8: // '\b'
            case 9: // '\t'
            case 11: // '\013'
            case 12: // '\f'
            case 13: // '\r'
            case 14: // '\016'
            case 15: // '\017'
            case 16: // '\020'
            case 17: // '\021'
            case 18: // '\022'
            case 19: // '\023'
            case 20: // '\024'
            case 21: // '\025'
            case 22: // '\026'
            case 23: // '\027'
            case 24: // '\030'
            case 26: // '\032'
            case 27: // '\033'
            default:
                break;

            case 10: // '\n'
                w();
                break;

            case 28: // '\034'
                n();
                break;

            case 25: // '\031'
                U();
                break;

            case 1: // '\001'
                c_javax_microedition_lcdui_Image_static_fld = null;
                break;

            case 2: // '\002'
                R();
                break;

            case 4: // '\004'
                U();
                break;

            case 7: // '\007'
                try
                {
                    a_java_io_DataInputStream_static_fld.close();
                }
                catch(Exception _ex) { }
                a_java_io_DataInputStream_static_fld = null;
                e.e();
                a_d_static_fld = null;
                break;

            case 6: // '\006'
                m();
                x();
                O_boolean_static_fld = true;
                j_int_static_fld = 0;
                break;
            }
            j();
        }
    }

    private static void d(int i1)
    {
        k_int_static_fld = i1;
    }

    private static void k()
    {
        switch(j_int_static_fld)
        {
        case 5: // '\005'
        case 13: // '\r'
        default:
            break;

        case 4: // '\004'
        case 15: // '\017'
        case 17: // '\021'
            if(l_int_static_fld == 8)
            {
                p_int_static_fld = 0x13018;
                dN = l_int_static_fld;
            } else
            if(l_int_static_fld == 1)
            {
                p_int_static_fld = 4122;
                dN = l_int_static_fld;
            } else
            if(l_int_static_fld == 6)
            {
                p_int_static_fld = 20506;
                dN = l_int_static_fld;
            }
            if(j_int_static_fld == 4)
            {
                e.a();
                dL = 0;
                dM = -1;
                e.a(false);
                ak();
                return;
            }
            if(j_int_static_fld == 15)
            {
                S_boolean_static_fld = true;
                ad();
                return;
            }
            if(j_int_static_fld == 17)
            {
                T_boolean_static_fld = true;
                ad();
                return;
            }
            break;

        case 3: // '\003'
            if(p_int_static_fld != 12384)
            {
                w(1);
                c_boolean_static_fld = true;
                o_int_static_fld = 12384;
                if(l_int_static_fld == 8)
                {
                    p_int_static_fld = 0x13c00;
                    return;
                }
                if(l_int_static_fld == 2)
                {
                    p_int_static_fld = 7170;
                    return;
                } else
                {
                    p_int_static_fld = 12384;
                    return;
                }
            }
            e.a();
            e.a(false);
            dP = -1;
            String as1[] = {
                c(27), c(17), c(11)
            };
            int ai1[] = {
                0, 0, 0
            };
            dO = 0;
            a(((String) (null)), as1, ai1, dO, 0, aH, 2, 2, 0);
            c(cI);
            y(e.b / 2 - cI / 2 - 4);
            cN = dA;
            if(l_int_static_fld == 2)
            {
                dQ = 1;
                return;
            }
            if(l_int_static_fld == 8)
            {
                dQ = 8;
                return;
            }
            break;

        case 7: // '\007'
            p_int_static_fld = 386;
            return;

        case 1: // '\001'
            if(l_int_static_fld == 0 || l_int_static_fld == 3)
            {
                w(0);
                c_boolean_static_fld = true;
                p_int_static_fld = 7170;
                o_int_static_fld = 0x20383;
            } else
            {
                p_int_static_fld = 0x20383;
            }
            e.a();
            e.c(2);
            Y();
            return;

        case 6: // '\006'
            p_int_static_fld = 0x24383;
            b(21, 0);
            return;

        case 2: // '\002'
            boolean flag = false;
            switch(dZ)
            {
            case 6: // '\006'
                s(1);
                d(0xb50000, bX, 0x200000);
                M();
                break;
            }
            k_int_static_fld = 3;
            if(by == -1)
            {
                i_int_static_fld = 58;
                return;
            } else
            {
                i_int_static_fld = 60;
                return;
            }

        case 8: // '\b'
            p_int_static_fld = 0x1b180;
            e.a();
            e.c(2);
            Y();
            return;

        case 10: // '\n'
            an();
            return;

        case 11: // '\013'
        case 19: // '\023'
            String as2[] = {
                c(23)
            };
            int ai2[] = {
                0, 0
            };
            a(as2, ai2, ((a) (null)), dD, aG, dE, aI, 17, true);
            e.c(0);
            e.c(4);
            b(false);
            c(da, true);
            return;

        case 12: // '\f'
        case 20: // '\024'
            String as3[] = {
                c(22)
            };
            int ai3[] = {
                0, 0
            };
            a(as3, ai3, ((a) (null)), dD, aG, dE, aI, 17, true);
            e.c(0);
            e.c(4);
            b(false);
            c(da, true);
            return;

        case 18: // '\022'
            U_boolean_static_fld = true;
            ad();
            return;

        case 14: // '\016'
            ad();
            return;

        case 16: // '\020'
            A(2);
            return;

        case 9: // '\t'
            e.a();
            w(1);
            c_boolean_static_fld = true;
            int i1 = dn;
            a_boolean_array1d_static_fld[i1] = false;
            if(l_int_static_fld == 8)
                p_int_static_fld = 0x13c00;
            else
                p_int_static_fld = 7170;
            o_int_static_fld = 12288;
            break;
        }
    }

    private static void l()
    {
        m();
        l_int_static_fld = j_int_static_fld;
        j_int_static_fld = k_int_static_fld;
        k_int_static_fld = 0;
        k();
    }

    private static void m()
    {
        switch(j_int_static_fld)
        {
        case 10: // '\n'
            U();
            break;

        case 11: // '\013'
            O();
            U();
            break;

        case 12: // '\f'
            O();
            U();
            break;

        case 19: // '\023'
            O();
            U();
            break;

        case 20: // '\024'
            O();
            U();
            break;

        case 14: // '\016'
        case 15: // '\017'
        case 17: // '\021'
        case 18: // '\022'
            aj();
            break;

        case 16: // '\020'
            O();
            U();
            R();
            break;

        case 4: // '\004'
            R();
            break;

        case 3: // '\003'
            O();
            R();
            break;

        case 6: // '\006'
            b(22, 0);
            break;
        }
        if(d_int_static_fld != 0)
        {
            l_int_static_fld = 0;
            k_int_static_fld = 0;
            j_int_static_fld = 0;
            c_a_array1d_static_fld = null;
            m_d_array1d_static_fld = null;
            d_byte_array1d_static_fld = null;
            e_byte_array1d_static_fld = null;
            ak_int_array1d_static_fld = null;
            c_byte_array1d_static_fld = null;
            ab_boolean_static_fld = false;
            b_a_array1d_static_fld = null;
            w_int_array1d_static_fld = null;
            d_d_array1d_static_fld = null;
            c_a_static_fld = null;
            G();
            L_int_array1d_static_fld = null;
            d_int_array1d_static_fld = null;
            F_int_array1d_static_fld = null;
            b_javax_microedition_lcdui_Image_static_fld = null;
            k_d_array1d_static_fld = null;
            h_a_static_fld = null;
            l_d_array1d_static_fld = null;
            i_a_static_fld = null;
            B_int_array1d_static_fld = null;
            e_d_array1d_static_fld = null;
            J_int_array1d_static_fld = null;
            i_d_array1d_static_fld = null;
            C_int_array1d_static_fld = null;
            f_d_array1d_static_fld = null;
            G_int_array1d_static_fld = null;
            g_d_array1d_static_fld = null;
            f_a_static_fld = null;
            I_int_array1d_static_fld = null;
            h_d_array1d_static_fld = null;
            aE_int_array1d_static_fld = null;
            for(int i1 = 0; i1 != 4; i1++)
            {
                a_a_array1d_static_fld[i1] = null;
                a_d_array2d_static_fld[i1] = null;
            }

            ai_boolean_static_fld = false;
            aj_boolean_static_fld = false;
            ak_boolean_static_fld = false;
            al_boolean_static_fld = false;
            a_a_static_fld = null;
            a_d_array1d_static_fld = null;
            L();
        }
    }

    private static void e(int i1)
    {
        r_int_static_fld = i1;
    }

    private static void f(int i1)
    {
        e_boolean_static_fld = true;
        u_int_static_fld = i1;
    }

    private static void n()
    {
        o();
        q_int_static_fld = 0;
        r_int_static_fld = 0;
        s_int_static_fld = 0;
        t_int_static_fld = 0;
    }

    private static void o()
    {
        switch(q_int_static_fld)
        {
        case 1: // '\001'
            O();
            R();
            j_a_static_fld = null;
            k_a_static_fld = null;
            b_d_static_fld = null;
            c_d_static_fld = null;
            n_int_array1d_static_fld = null;
            return;

        case 2: // '\002'
            aj();
            return;

        case 3: // '\003'
            return;

        case 4: // '\004'
            R();
            O();
            return;

        case 5: // '\005'
            O();
            U();
            return;

        case 7: // '\007'
            U();
            return;

        case 10: // '\n'
            O();
            U();
            return;

        case 11: // '\013'
            return;

        case 8: // '\b'
            O();
            U();
            // fall through

        case 6: // '\006'
        case 9: // '\t'
        default:
            return;
        }
    }

    private static void p()
    {
        f_boolean_static_fld = false;
        F_int_static_fld = 0;
        G_int_static_fld = 0;
        A_int_static_fld = 0;
        b(20, 1);
        if((i_int_static_fld & 8) != 0)
            T_int_static_fld = U_int_static_fld;
        if((i_int_static_fld & 0x10) != 0)
            V_int_static_fld = W_int_static_fld;
        if((i_int_static_fld & 2) != 0 || (i_int_static_fld & 1) != 0)
        {
            z_int_static_fld = 1;
            a(bf, be);
            d(B_int_static_fld, C_int_static_fld - 1);
            b(e.a_int_static_fld, e.b, eI, eJ, false);
        }
        if((i_int_static_fld & 4) != 0)
        {
            a(bz, bA);
            z_int_static_fld = bB;
            d(B_int_static_fld, C_int_static_fld - 1);
            b(e.a_int_static_fld, e.b, eI, eJ, false);
        }
        if((i_int_static_fld & 4) != 0 || (i_int_static_fld & 2) != 0)
        {
            for(int i1 = 0; i1 != bw; i1++)
            {
                int j2 = i1 * 10;
                G_int_array1d_static_fld[j2 + 8] += b_int_static_fld;
                if(G_int_array1d_static_fld[j2 + 6] != 1 || G_int_array1d_static_fld[j2 + 9] != by)
                    continue;
                switch(G_int_array1d_static_fld[j2 + 2])
                {
                case 90: // 'Z'
                    as_int_static_fld &= ~(1 << dZ);
                    j(0xff9c0000);
                    break;

                case 91: // '['
                    at_int_static_fld &= ~(1 << dZ);
                    k(0xff9c0000);
                    break;
                }
                if(G_int_array1d_static_fld[j2 + 6] == 1 && G_int_array1d_static_fld[j2 + 9] == by)
                    G_int_array1d_static_fld[j2 + 6] = 0;
            }

            for(int j1 = 0; j1 != bs; j1++)
            {
                int k2 = j1 * 11;
                if(B_int_array1d_static_fld[k2 + 10] == by)
                {
                    B_int_array1d_static_fld[k2 + 4] = 1;
                    B_int_array1d_static_fld[k2 + 5] = 0;
                    B_int_array1d_static_fld[k2 + 6] = 1;
                }
            }

            for(int k1 = 0; k1 != bu; k1++)
            {
                int l2 = k1 * 9;
                if(C_int_array1d_static_fld[l2 + 8] == by && C_int_array1d_static_fld[l2 + 5] == 3)
                {
                    C_int_array1d_static_fld[l2 + 5] = 0;
                    C_int_array1d_static_fld[l2 + 6] = 1;
                    b(k1, true);
                }
            }

            for(int l1 = 0; l1 != gB; l1++)
            {
                int i3 = l1 * 22;
                int j3 = aE_int_array1d_static_fld[i3 + 16];
                if(aE_int_array1d_static_fld[i3 + 15] == by || aE_int_array1d_static_fld[i3 + 8] != 202 && aE_int_array1d_static_fld[i3 + 13] != d(j3, 0))
                    f(i3, 200);
            }

        } else
        if((i_int_static_fld & 0x80) != 0)
        {
            a(Q_int_static_fld, R_int_static_fld);
            z_int_static_fld = S_int_static_fld;
        }
        if((i_int_static_fld & 0x20) != 0)
        {
            if(w_int_array1d_static_fld != null)
            {
                for(int i2 = w_int_array1d_static_fld.length; i2 >= 8;)
                {
                    i2 -= 8;
                    w_int_array1d_static_fld[i2] = 0;
                }

            }
            bk = 0;
        }
        if((i_int_static_fld & 0x40) != 0)
        {
            boolean flag = false;
            P_int_static_fld = 0;
            int k3 = 0;
            do
            {
                if(k3 >= 4)
                    break;
                if((P_int_static_fld = P_int_static_fld) > 7)
                    P_int_static_fld = 0;
                else
                if(P_int_static_fld < 0)
                    P_int_static_fld = 6;
                if(v_int_array1d_static_fld[P_int_static_fld] != 0)
                {
                    flag = true;
                    break;
                }
                k3++;
            } while(true);
            if(!flag)
                P_int_static_fld = -1;
        }
        s();
    }

    private static void a(int i1, int j1)
    {
        D_int_static_fld = i1 << 16;
        E_int_static_fld = j1 << 16;
        B_int_static_fld = i1;
        C_int_static_fld = j1;
        if(y_boolean_static_fld)
            d(B_int_static_fld, C_int_static_fld - 1);
    }

    private static boolean a(int i1, int j1, int k1)
    {
        boolean flag = false;
        int l1 = 0;
        int i2 = 0;
        byte byte0 = 0;
        byte byte1 = 0;
        switch(i1)
        {
        case 0: // '\0'
            l1 = -4;
            i2 = 6;
            byte0 = -16;
            byte1 = 0;
            flag = true;
            break;

        case 1: // '\001'
            if(J_int_static_fld == 7 && ((i1 = K_int_static_fld >>> 16) >= 300 && i1 <= 700))
            {
                l1 = -2;
                i2 = 23;
                byte0 = -11;
                byte1 = -2;
                flag = true;
            }
            break;

        case 2: // '\002'
            l1 = -21;
            i2 = 25;
            byte0 = -34;
            byte1 = 0;
            flag = true;
            break;
        }
        if(flag)
        {
            if(z_int_static_fld < 0)
            {
                i1 = l1;
                l1 = -i2;
                i2 = -i1;
            }
            X_int_static_fld = l1 + j1;
            Y_int_static_fld = i2 + j1;
            Z_int_static_fld = byte0 + k1;
            aa_int_static_fld = byte1 + k1;
        }
        return flag;
    }

    private static void g(int i1)
    {
        y_int_static_fld = w_int_static_fld;
        w_int_static_fld = i1;
        x_int_static_fld = 0;
        switch(i1)
        {
        case 0: // '\0'
            J_int_static_fld = 0;
            K_int_static_fld = 1;
            return;

        case 14: // '\016'
            J_int_static_fld = 13;
            K_int_static_fld = 1;
            return;

        case 1: // '\001'
            J_int_static_fld = 1;
            K_int_static_fld = 1;
            return;

        case 2: // '\002'
            J_int_static_fld = 2;
            K_int_static_fld = 1;
            return;

        case 3: // '\003'
            J_int_static_fld = 3;
            K_int_static_fld = 1;
            return;

        case 4: // '\004'
            J_int_static_fld = 12;
            K_int_static_fld = 1;
            return;

        case 5: // '\005'
            return;

        case 6: // '\006'
            J_int_static_fld = 4;
            K_int_static_fld = 1;
            return;

        case 7: // '\007'
            J_int_static_fld = 7;
            K_int_static_fld = 1;
            return;

        case 12: // '\f'
            return;

        case 8: // '\b'
            J_int_static_fld = 6;
            if(y_int_static_fld == 6 || y_int_static_fld == 3 || y_int_static_fld == 12 || y_int_static_fld == 2)
                J_int_static_fld = 10;
            K_int_static_fld = 1;
            return;

        case 9: // '\t'
            J_int_static_fld = 8;
            K_int_static_fld = 1;
            return;

        case 10: // '\n'
            J_int_static_fld = 2;
            K_int_static_fld = 1;
            return;

        case 11: // '\013'
            J_int_static_fld = 9;
            K_int_static_fld = 1;
            return;

        case 13: // '\r'
            J_int_static_fld = 11;
            K_int_static_fld = 1;
            break;
        }
    }

    private static void b(int i1, int j1)
    {
        switch(i1)
        {
        case 17: // '\021'
        default:
            break;

        case 21: // '\025'
            j_boolean_static_fld = false;
            b(20, z_int_static_fld);
            return;

        case 22: // '\026'
            j_boolean_static_fld = true;
            return;

        case 20: // '\024'
            g(0);
            z_int_static_fld = j1;
            F_int_static_fld = 0;
            G_int_static_fld = 0;
            return;

        case 0: // '\0'
            if(w_int_static_fld == 0)
                if(z_int_static_fld == j1)
                {
                    g(1);
                    F_int_static_fld = j1 * 0x333330;
                    return;
                } else
                {
                    z_int_static_fld = j1;
                    return;
                }
            if(w_int_static_fld == 1)
            {
                z_int_static_fld = j1;
                F_int_static_fld = j1 * 0x333330;
                return;
            }
            break;

        case 1: // '\001'
            if(w_int_static_fld != 3 && w_int_static_fld != 5 && w_int_static_fld != 2 && w_int_static_fld != 6)
                break;
            if(w_int_static_fld != 5)
            {
                if(j1 > 0 && F_int_static_fld < 0x24ccc0)
                {
                    H_int_static_fld = 0x780000;
                    z_int_static_fld = 1;
                    return;
                }
                if(j1 < 0 && F_int_static_fld > 0xffdb3340)
                {
                    H_int_static_fld = 0xff880000;
                    z_int_static_fld = -1;
                    return;
                }
                break;
            }
            H_int_static_fld = j1 * 0x780000;
            if(z_int_static_fld > 0)
            {
                if(H_int_static_fld < 0)
                    F_int_static_fld = 0;
                if(H_int_static_fld > 0x24ccc0)
                {
                    H_int_static_fld = 0x24ccc0;
                    return;
                }
                break;
            }
            if(z_int_static_fld >= 0)
                break;
            if(H_int_static_fld > 0)
                F_int_static_fld = 0;
            if(H_int_static_fld < 0xffdb3340)
            {
                H_int_static_fld = 0xffdb3340;
                return;
            }
            break;

        case 2: // '\002'
            Q_int_static_fld = B_int_static_fld;
            R_int_static_fld = C_int_static_fld;
            S_int_static_fld = z_int_static_fld;
            // fall through

        case 3: // '\003'
            if(w_int_static_fld == 2 || w_int_static_fld == 6 || J_int_static_fld == 10)
            {
                g(14);
                F_int_static_fld = 0;
                return;
            }
            if(w_int_static_fld == 8)
            {
                F_int_static_fld = 0;
                return;
            }
            break;

        case 4: // '\004'
            if(w_int_static_fld == 1 || w_int_static_fld == 0)
            {
                g(2);
                return;
            }
            break;

        case 5: // '\005'
            if(w_int_static_fld == 0 || w_int_static_fld == 1)
            {
                g(3);
                F_int_static_fld = 0;
                G_int_static_fld = 0xff68ccd0;
                return;
            }
            break;

        case 6: // '\006'
            if(w_int_static_fld == 0 || w_int_static_fld == 1)
            {
                g(4);
                z_int_static_fld = j1;
                G_int_static_fld = 0;
                F_int_static_fld = 0;
                return;
            }
            break;

        case 7: // '\007'
            g(5);
            G_int_static_fld = 0xff68ccd0;
            F_int_static_fld = (F_int_static_fld = z_int_static_fld) * 0x366660;
            return;

        case 8: // '\b'
            if(w_int_static_fld != 2 || !k_boolean_static_fld)
                break;
            g(6);
            if(j1 == 0)
            {
                F_int_static_fld = 0;
                return;
            } else
            {
                z_int_static_fld = j1;
                F_int_static_fld = (F_int_static_fld = j1) * 0x333330;
                return;
            }

        case 9: // '\t'
            if(w_int_static_fld != 6)
                break;
            g(2);
            if(j1 == 0)
            {
                F_int_static_fld = 0;
                return;
            } else
            {
                z_int_static_fld = j1;
                F_int_static_fld = (F_int_static_fld = j1) * 0x1e6660;
                return;
            }

        case 18: // '\022'
            if((ab_int_static_fld & 2) != 0 && w_int_static_fld == 0)
                b(10, z_int_static_fld);
            if((ab_int_static_fld & 4) != 0)
                b(10, z_int_static_fld);
            if((ab_int_static_fld & 8) != 0)
            {
                i(i1 = bS * 6, 4);
                av_int_static_fld = 2;
                aw_int_static_fld = bF;
                ax_int_static_fld = bG;
                a(1, J_int_array1d_static_fld[i1], J_int_array1d_static_fld[i1 + 1], 0xffffff, 0xffddff, 0xeebbff);
                x_boolean_static_fld = true;
                bD = 0;
                i1 = dm;
                a_boolean_array1d_static_fld[i1] = false;
                return;
            }
            // fall through

        case 10: // '\n'
            if(w_int_static_fld == 0 || w_int_static_fld == 2 || w_int_static_fld == 3 || w_int_static_fld == 5 || w_int_static_fld == 6)
            {
                g(7);
                F_int_static_fld = (F_int_static_fld = z_int_static_fld) * 0x99990;
                G_int_static_fld = 0xffd66670;
                M_int_static_fld = 0;
                return;
            }
            break;

        case 11: // '\013'
            if(w_int_static_fld != 0 && w_int_static_fld != 2 && w_int_static_fld != 3 && w_int_static_fld != 5 && w_int_static_fld != 6)
                break;
            if(P_int_static_fld < 0)
            {
                b(10, z_int_static_fld);
                return;
            }
            long l1 = 0L;
            if(v_int_array1d_static_fld[P_int_static_fld] == 0)
            {
                b(10, z_int_static_fld);
                return;
            }
            if(v_int_array1d_static_fld[P_int_static_fld] == 1)
                l1 = 0x280000L;
            else
            if(v_int_array1d_static_fld[P_int_static_fld] == 2)
                l1 = 0x3c0000L;
            if((long)V_int_static_fld >= l1)
            {
                g(8);
                g_boolean_static_fld = false;
                N_int_static_fld = P_int_static_fld;
                O_int_static_fld = v_int_array1d_static_fld[P_int_static_fld] - 1;
                i(-(int)l1);
                return;
            } else
            {
                b(10, z_int_static_fld);
                return;
            }

        case 12: // '\f'
            if(w_int_static_fld == 7)
            {
                F_int_static_fld = (int)((long)F_int_static_fld * 0xfffffffffffecccdL >> 16);
                M_int_static_fld = 2;
                return;
            }
            if(w_int_static_fld == 1)
            {
                g(0);
                F_int_static_fld = 0;
                return;
            } else
            {
                F_int_static_fld = 0;
                return;
            }

        case 13: // '\r'
            if(w_int_static_fld == 10)
                break;
            g(10);
            h(0xff9c0000);
            if(T_int_static_fld < 0)
                T_int_static_fld = 0;
            G_int_static_fld = 0xffd00000;
            return;

        case 14: // '\016'
            if(w_int_static_fld == 6)
            {
                g(2);
                return;
            }
            break;

        case 15: // '\017'
            F_int_static_fld = (int)((long)F_int_static_fld * 0xfffffffffffecccdL >> 16);
            M_int_static_fld = 2;
            a(1, z_int_static_fld <= 0 ? X_int_static_fld : Y_int_static_fld, C_int_static_fld + -11 + 4, 0, 0);
            return;

        case 16: // '\020'
            if(w_int_static_fld != 11)
            {
                g(11);
                v_int_static_fld = 0;
                return;
            }
            break;

        case 19: // '\023'
            ac_int_static_fld = 0;
            ac_int_static_fld = 1000;
            g(13);
            break;
        }
    }

    private static void c(int i1, int j1)
    {
        if(A_int_static_fld > 0 || w_int_static_fld == 11 || w_int_static_fld == 10)
            return;
        aD();
        h(-i1);
        if(T_int_static_fld <= 0)
        {
            T_int_static_fld = 0;
            b(16, 0);
            return;
        }
        if(j1 < 0)
            j1 = -1;
        else
        if(j1 > 0)
            j1 = 1;
        g(9);
        F_int_static_fld = j1 * 0x180000;
        G_int_static_fld = 0xffc80000;
        A_int_static_fld = 2000;
        s();
    }

    private static void q()
    {
        int i1 = (K_int_static_fld & 3) != 0 ? 0 : 1;
label0:
        switch(w_int_static_fld)
        {
        case 12: // '\f'
        default:
            break;

        case 13: // '\r'
            if(i1 != 0)
            {
                h_boolean_static_fld = true;
                E_int_static_fld = ++C_int_static_fld << 16;
                g(2);
                return;
            }
            break;

        case 14: // '\016'
            if(i1 != 0)
            {
                g(0);
                return;
            }
            break;

        case 4: // '\004'
            if((K_int_static_fld & 0xfffc) >= 4)
            {
                b(7, z_int_static_fld);
                return;
            }
            break;

        case 3: // '\003'
        case 5: // '\005'
            if(G_int_static_fld >= 0)
            {
                g(2);
                return;
            }
            break;

        case 6: // '\006'
            long l1 = 0L;
            i(-(int)(b_long_static_fld * 0x4b0000L >> 16));
            if(V_int_static_fld < 0)
            {
                V_int_static_fld = 0;
                b(14, 0);
            }
            if(J_int_static_fld == 4 && i1 != 0)
            {
                J_int_static_fld = 5;
                K_int_static_fld = 1;
                return;
            }
            break;

        case 7: // '\007'
            if(i1 != 0)
            {
                g(0);
                F_int_static_fld = 0;
                return;
            }
            if(M_int_static_fld != 0)
                break;
            boolean flag = false;
            if((K_int_static_fld & 0xffff0000) >>> 16 >= 200)
            {
                F_int_static_fld = (F_int_static_fld = 0x433330) * z_int_static_fld;
                G_int_static_fld = 0x100000;
                M_int_static_fld = 1;
            }
            return;

        case 8: // '\b'
            if(y_int_static_fld == 6)
            {
                boolean flag1 = false;
                i(-(int)(b_long_static_fld * 0x4b0000L >> 16));
                if(V_int_static_fld < 0)
                {
                    V_int_static_fld = 0;
                    b(14, 0);
                }
            }
            if(i1 != 0)
            {
                g(y_int_static_fld);
                return;
            }
            if(!g_boolean_static_fld && K_int_static_fld >>> 16 >= 200)
            {
                int i2 = z_int_static_fld;
                int k1 = E_int_static_fld;
                int j1 = D_int_static_fld;
                i1 = (N_int_static_fld << 1) + O_int_static_fld;
                int j2 = br << 3;
                br = (br + 1) % 10;
                int k2 = x_int_array1d_static_fld[i1] * i2;
                w_int_array1d_static_fld[j2++] = 1;
                w_int_array1d_static_fld[j2++] = i1;
                w_int_array1d_static_fld[j2++] = ((30 + b_a_array1d_static_fld[0].a(i1) / 2) * i2 << 16) + j1;
                w_int_array1d_static_fld[j2++] = k2;
                w_int_array1d_static_fld[j2++] = k1 + 0xfffc0000 + 32768 >> 16;
                w_int_array1d_static_fld[j2++] = y_int_array1d_static_fld[i1];
                w_int_array1d_static_fld[j2++] = i2;
                w_int_array1d_static_fld[j2] = 1;
                bk++;
                g_boolean_static_fld = true;
                return;
            }
            break;

        case 9: // '\t'
            if(i1 != 0)
            {
                g(3);
                return;
            }
            break;

        case 10: // '\n'
            if(x_int_static_fld < 1500)
                break;
            if(T_int_static_fld > 0)
            {
                i_int_static_fld = 160;
                p();
                A_int_static_fld = 2000;
                return;
            } else
            {
                i_int_static_fld = 60;
                f_boolean_static_fld = true;
                return;
            }

        case 11: // '\013'
            switch(v_int_static_fld)
            {
            default:
                break label0;

            case 0: // '\0'
                a(2, B_int_static_fld, C_int_static_fld - 17, 0, 0);
                q(400);
                v_int_static_fld = 1;
                return;

            case 1: // '\001'
                if(i1 != 0)
                {
                    v_int_static_fld = 2;
                    return;
                }
                break label0;

            case 2: // '\002'
                break;
            }
            if(x_int_static_fld > 1000)
                f_boolean_static_fld = true;
            break;
        }
    }

    private static void r()
    {
        int i1;
        int j1;
label0:
        {
            i1 = e.f;
            j1 = e.d;
            if((i1 & 0x2020) != 0)
            {
                b(0, -1);
                b(1, -1);
                break label0;
            }
            if((i1 & 0x4080) != 0)
            {
                b(0, 1);
            } else
            {
                if((i1 & 4) != 0 || (i1 & 0xa000) == 40960)
                {
                    b(1, -1);
                    break label0;
                }
                if((i1 & 0x10) == 0 && (i1 & 0xc000) != 49152)
                    break label0;
            }
            b(1, 1);
        }
        if(w_int_static_fld == 1 && (i1 & 0x60a0) == 0)
        {
            g(0);
            F_int_static_fld = 0;
        }
        if((j1 & 4) != 0 && (i1 & 0x1e000) == 0 || (j1 & 0xa000) == 40960)
        {
            b(6, -1);
            b(8, -1);
        } else
        if((j1 & 0x10) != 0 && (i1 & 0x1e000) == 0 || (j1 & 0xc000) == 49152)
        {
            b(6, 1);
            b(8, 1);
        } else
        if((j1 & 8) != 0 && (i1 & 0x1e000) == 0 || (j1 & 0x8000) != 0)
        {
            b(5, 0);
            b(8, 0);
        } else
        if((j1 & 0x10200) != 0)
            if(w_int_static_fld == 0 && ac_int_static_fld <= 1000 && i_boolean_static_fld)
            {
                b(19, z_int_static_fld);
            } else
            {
                ac_int_static_fld = 0;
                b(9, 0);
            }
        ab_int_static_fld = 0;
        if(bt != -1)
            ab_int_static_fld |= 2;
        if(bS != -1)
            ab_int_static_fld |= 8;
        if(gC != -1)
            ab_int_static_fld |= 4;
        if((j1 & 0x20040) != 0)
        {
            if(ab_int_static_fld != 0)
            {
                b(18, z_int_static_fld);
                return;
            }
            if((ab_int_static_fld & 4) != 0)
            {
                ac_int_static_fld = 0;
                b(10, 0);
                return;
            }
            b(11, z_int_static_fld);
        }
    }

    private static void d(int i1, int j1)
    {
        int j3;
        if((i1 = B_int_static_fld - i1) != 0)
        {
            a(0, B_int_static_fld, j1);
            int k1 = 0;
            int l1;
            int j2;
            j3 = i1 <= 0 ? X_int_static_fld : Y_int_static_fld;
            j2 = i1;
            l1 = aa_int_static_fld;
            k1 = Z_int_static_fld;
            i1 = j3;
            int k2 = d(j3);
            k1 = e(k1);
            l1 = e(l1) - k1;
            int i3 = 0;
            for(k1 *= ek; l1 >= 0; k1 += ek)
            {
                if(k2 >= 0 && k2 < ek)
                    i3 |= c_byte_array1d_static_fld[k1 + k2];
                else
                    i3 |= 1;
                l1--;
            }

            if((i3 &= 0x35) != 0 && j2 != 0)
                if(j2 > 0)
                    em = (k2 << 4) - 1 - i1;
                else
                    em = (k2 + 1 << 4) - i1;
            if(((i1 = i3) & 4) != 0)
                c(0x4b0000, 0);
            else
            if((i1 & 0x11) != 0 || (i1 & 0x20) != 0)
            {
                D_int_static_fld = (B_int_static_fld += em) << 16;
                b(12, z_int_static_fld);
            }
        }
        i1 = C_int_static_fld - j1;
        a(0, B_int_static_fld, i1 != 0 ? C_int_static_fld : C_int_static_fld + 1);
        boolean flag = false;
        int i2;
        if(((i2 = a(i1 < 0 ? Z_int_static_fld : aa_int_static_fld, X_int_static_fld, Y_int_static_fld, i1, 31)) & 0x13) != 0)
        {
            boolean flag1 = true;
            int l2 = i1 != 0 ? em : 0;
            if((i2 & 2) != 0)
                if(!h_boolean_static_fld)
                {
                    flag1 = false;
                    if(i1 >= 0)
                    {
                        a(0, B_int_static_fld, j1);
                        if(a(aa_int_static_fld, X_int_static_fld, Y_int_static_fld, i1, 2) == 0)
                        {
                            flag1 = true;
                            i_boolean_static_fld = true;
                        }
                    }
                } else
                {
                    flag1 = (i2 & 0x11) != 0;
                }
            if((i2 & 0x11) != 0)
            {
                i_boolean_static_fld = false;
                flag1 = true;
            }
            if(flag1)
            {
                E_int_static_fld = (C_int_static_fld += l2) << 16;
                G_int_static_fld = 0;
                if(i1 >= 0)
                    flag = true;
            }
        }
        if((a(i1 < 0 ? aa_int_static_fld + 2 : aa_int_static_fld, X_int_static_fld, Y_int_static_fld, i1, 31) & 2) == 0 && h_boolean_static_fld)
        {
            h_boolean_static_fld = false;
            i_boolean_static_fld = false;
        }
        boolean flag2 = false;
        if((i2 & 4) != 0)
        {
            c(0x4b0000, 0);
            flag2 = true;
        }
        if(i1 >= 0 && (i2 & 0x13) == 0 && (i2 & 8) != 0)
            b(13, 0);
        if(flag)
        {
            b(flag2 ? 3 : 2, 0);
            return;
        } else
        {
            b(4, 0);
            return;
        }
    }

    private static boolean a(int i1)
    {
        i1 = a(i1, B_int_static_fld, C_int_static_fld);
        en = X_int_static_fld;
        ep = Y_int_static_fld;
        eo = Z_int_static_fld;
        eq = aa_int_static_fld;
        return i1;
    }

    private static void h(int i1)
    {
        T_int_static_fld += i1;
        i1 = U_int_static_fld;
        if(T_int_static_fld > i1)
            T_int_static_fld = i1;
        s();
    }

    private static void i(int i1)
    {
        V_int_static_fld += i1;
        i1 = W_int_static_fld;
        if(V_int_static_fld > i1)
            V_int_static_fld = i1;
        s();
    }

    private static void j(int i1)
    {
        T_int_static_fld = U_int_static_fld += i1;
        s();
    }

    private static void k(int i1)
    {
        V_int_static_fld = W_int_static_fld += i1;
        s();
    }

    private static void s()
    {
        b(T_int_static_fld, U_int_static_fld, V_int_static_fld, W_int_static_fld);
    }

    private static int a(int i1)
    {
        DataInputStream datainputstream;
        String as1[][];
        String as3[];
        String as4[];
        int i2;
        datainputstream = e.a("gmg2");
        ae_int_static_fld = i1;
        datainputstream.readByte();
        datainputstream.readUTF();
        datainputstream.readByte();
        datainputstream.readBoolean();
        datainputstream.readShort();
        datainputstream.readShort();
        datainputstream.readInt();
        byte byte0 = datainputstream.readByte();
        byte byte1 = datainputstream.readByte();
        byte byte2 = datainputstream.readByte();
        as3 = new String[byte1];
        as4 = new String[byte1];
        as1 = new String[byte1][];
        for(int j1 = 0; j1 < byte2; j1++)
        {
            as4[j1] = datainputstream.readUTF();
            as3[j1] = datainputstream.readUTF();
            if(as4[j1].equals(""))
                as4[j1] = null;
            if(as3[j1].equals(""))
                as3[j1] = null;
            as1[j1] = new String[byte0];
            for(int k1 = 0; k1 < byte0; k1++)
                as1[j1][k1] = datainputstream.readUTF();

        }

        byte byte3 = datainputstream.readByte();
        for(int l1 = byte2; l1 < byte2 + byte3; l1++)
        {
            as4[l1] = datainputstream.readUTF();
            if(as4[l1].equals(""))
                as4[l1] = null;
        }

        i2 = 0;
        String as2[] = new String[3];
        int ai3[] = new int[3];
        String as5[][] = new String[3][];
        for(int l2 = 0; l2 < 3 && datainputstream.readBoolean(); l2++)
        {
            as2[l2] = datainputstream.readUTF();
            ai3[l2] = -1;
            if(as2[l2].equals(""))
            {
                as2[l2] = null;
                ai3[l2] = datainputstream.readByte();
            }
            as5[l2] = new String[byte0];
            for(int k3 = 0; k3 < byte0; k3++)
                as5[l2][k3] = datainputstream.readUTF();

            i2++;
        }

        if(i1 != 0)
            break MISSING_BLOCK_LABEL_510;
        if(i2 > 0)
        {
            af_int_static_fld = i2;
            a_java_lang_String_array1d_static_fld = new String[i2];
            b_java_lang_String_array1d_static_fld = new String[i2];
            a_java_lang_String_array2d_static_fld = new String[i2][];
            b_java_lang_String_array2d_static_fld = new String[i2][];
            for(int i3 = 0; i3 < i2; i3++)
            {
                if(as2[i3] == null)
                {
                    int l3 = ai3[i3];
                    a_java_lang_String_array1d_static_fld[i3] = as3[l3];
                    b_java_lang_String_array1d_static_fld[i3] = as4[l3];
                    a_java_lang_String_array2d_static_fld[i3] = as1[l3];
                } else
                {
                    a_java_lang_String_array1d_static_fld[i3] = as2[i3];
                }
                b_java_lang_String_array2d_static_fld[i3] = as5[i3];
            }

        } else
        {
            w();
        }
        datainputstream.close();
        return i2;
        int j3 = 1;
_L1:
        int i4;
        if(j3 > 2)
            break MISSING_BLOCK_LABEL_741;
        int ai1[] = new int[i4 = datainputstream.readByte()];
        int ai2[] = new int[i4];
        int ai4[] = new int[i4];
        for(int j2 = 0; j2 < i4; j2++)
        {
            ai1[j2] = datainputstream.readByte();
            ai2[j2] = datainputstream.readByte();
            if(datainputstream.readBoolean())
            {
                if(as1[ai1[j2]] != null)
                    ai4[j2] = 1500;
                else
                    ai4[j2] = 3500;
            } else
            {
                ai4[j2] = 0;
            }
        }

        if(j3 != i1)
            break MISSING_BLOCK_LABEL_731;
        if(i4 > 0)
        {
            af_int_static_fld = i4;
            a_java_lang_String_array1d_static_fld = new String[i4];
            b_java_lang_String_array1d_static_fld = new String[i4];
            a_java_lang_String_array2d_static_fld = new String[i4][];
            a_int_array1d_static_fld = ai2;
            b_int_array1d_static_fld = ai4;
            for(int k2 = 0; k2 < i4; k2++)
            {
                i1 = ai1[k2];
                a_java_lang_String_array1d_static_fld[k2] = as3[i1];
                b_java_lang_String_array1d_static_fld[k2] = as4[i1];
                a_java_lang_String_array2d_static_fld[k2] = as1[i1];
            }

        } else
        {
            w();
        }
        datainputstream.close();
        return i4;
        j3++;
          goto _L1
        JVM INSTR pop ;
        w();
        return 0;
    }

    private static String[] a()
    {
        t();
        String as1[] = new String[b_java_lang_String_array2d_static_fld.length];
        for(int i1 = 0; i1 < as1.length; i1++)
            as1[i1] = b_java_lang_String_array2d_static_fld[i1][ad_int_static_fld];

        return as1;
    }

    private static void t()
    {
        String s1;
        if((s1 = c(0)).equals("English"))
        {
            ad_int_static_fld = 0;
            return;
        }
        if(s1.equals("Fran\347ais"))
        {
            ad_int_static_fld = 1;
            return;
        }
        if(s1.equals("Italiano"))
        {
            ad_int_static_fld = 2;
            return;
        }
        if(s1.equals("Deutsch"))
        {
            ad_int_static_fld = 3;
            return;
        }
        if(s1.equals("Espa\361ol"))
        {
            ad_int_static_fld = 4;
            return;
        } else
        {
            ad_int_static_fld = ef;
            return;
        }
    }

    private static void u()
    {
        switch(ae_int_static_fld)
        {
        case 0: // '\0'
            d_int_static_fld = 28;
            return;

        case 1: // '\001'
            if(Z_boolean_static_fld || aa_boolean_static_fld)
            {
                d_int_static_fld = 3;
                return;
            } else
            {
                d_int_static_fld = 28;
                return;
            }

        case 2: // '\002'
            b.a_boolean_static_fld = true;
            break;
        }
    }

    private static void v()
    {
        e.a();
        e.c(0);
        e.c(1);
        m_boolean_static_fld = true;
    }

    private static void l(int i1)
    {
        e.a();
        if(i1 != ag_int_static_fld)
            a_javax_microedition_lcdui_Image_static_fld = null;
        if(a_javax_microedition_lcdui_Image_static_fld == null)
            try
            {
                ah_int_static_fld = e.b(b_java_lang_String_array1d_static_fld[i1]);
                a_javax_microedition_lcdui_Image_static_fld = e.a(b_java_lang_String_array1d_static_fld[i1]);
            }
            catch(Exception _ex)
            {
                a_javax_microedition_lcdui_Image_static_fld = null;
            }
        if(a_java_lang_String_array1d_static_fld[i1] != null)
            e.c(0);
        if(a_int_array1d_static_fld != null && a_int_array1d_static_fld[i1] != 0)
            e.c(5);
        if(ae_int_static_fld == 0)
            e.c(1);
        if(a_java_lang_String_array2d_static_fld[i1] != null)
        {
            b(0);
            D(0);
            if((aj_int_static_fld = 10 + a(a_java_lang_String_array2d_static_fld[i1][ad_int_static_fld])) > aH)
            {
                ai_int_static_fld = 0x30000;
                ak_int_static_fld = 1500;
                l_boolean_static_fld = true;
            } else
            {
                ai_int_static_fld = (aH - aj_int_static_fld) + 10 << 15;
                ak_int_static_fld = 0;
                l_boolean_static_fld = false;
            }
        }
        al_int_static_fld = 0;
        if(b_int_array1d_static_fld != null)
            al_int_static_fld = b_int_array1d_static_fld[i1];
        m_boolean_static_fld = false;
        ag_int_static_fld = i1;
    }

    private static void w()
    {
        ae_int_static_fld = -1;
        af_int_static_fld = 0;
        ag_int_static_fld = 0;
        m_boolean_static_fld = false;
        a_javax_microedition_lcdui_Image_static_fld = null;
        a_java_lang_String_array1d_static_fld = null;
        b_java_lang_String_array1d_static_fld = null;
        a_java_lang_String_array2d_static_fld = null;
        b_java_lang_String_array2d_static_fld = null;
        a_int_array1d_static_fld = null;
        b_int_array1d_static_fld = null;
    }

    private static void e(int i1, int j1)
    {
        if(!o_boolean_static_fld)
        {
            return;
        } else
        {
            e.a(o_boolean_static_fld);
            i1 = c_int_array1d_static_fld[i1];
            eA |= 2;
            eB = i1;
            eC = j1;
            return;
        }
    }

    private static void m(int i1)
    {
        if(!o_boolean_static_fld)
            return;
        String as1[];
        if((as1 = (new String[] {
    "ms", "me", "l0", "l1", "l2", "l3", "b0", "b1", "b2", "b3", 
    "b4", null, null, null, null, null, "f0"
}))[i1] == null)
            return;
        if(c_int_array1d_static_fld == null)
        {
            c_int_array1d_static_fld = new int[17];
            for(int j1 = 0; j1 != 17; j1++)
                c_int_array1d_static_fld[j1] = -1;

        }
        if(i1 >= as1.length || i1 < 0)
        {
            c_int_array1d_static_fld[i1] = -1;
            return;
        }
        if(c_int_array1d_static_fld[i1] != -1)
        {
            return;
        } else
        {
            c_int_array1d_static_fld[i1] = e.a(as1[i1]);
            return;
        }
    }

    private static void x()
    {
        e.a(false);
        if(c_int_array1d_static_fld != null)
        {
            for(int i1 = 0; i1 < 17; i1++)
            {
                e.a(c_int_array1d_static_fld[i1]);
                c_int_array1d_static_fld[i1] = -1;
            }

        }
        eA = 0;
        eB = -1;
        eC = 0;
        eD = 0;
        eD = 0;
    }

    private static void n(int i1)
    {
        if(!o_boolean_static_fld)
            return;
        switch(i1)
        {
        case 0: // '\0'
            m(2);
            return;

        case 2: // '\002'
            m(3);
            return;

        case 3: // '\003'
            m(4);
            return;

        case 5: // '\005'
            m(5);
            return;

        case 6: // '\006'
            m(9);
            m(10);
            return;

        case 1: // '\001'
        case 4: // '\004'
            m(16);
            break;
        }
    }

    private static void o(int i1)
    {
        if(!o_boolean_static_fld)
            return;
        switch(i1)
        {
        case 0: // '\0'
            e(2, -1);
            return;

        case 2: // '\002'
            e(3, -1);
            return;

        case 3: // '\003'
            e(4, -1);
            return;

        case 5: // '\005'
            e(5, -1);
            return;

        case 6: // '\006'
            e(9, -1);
            return;

        case 1: // '\001'
        case 4: // '\004'
            e(16, -1);
            break;
        }
    }

    private static void y()
    {
        int i1 = i_int_array1d_static_fld[2];
        int j1 = i_int_array1d_static_fld[3];
        aq_int_static_fld = aN / (i1 / 64);
        ar_int_static_fld = (an_int_static_fld - aO) / (j1 / 8);
    }

    private static boolean a()
    {
        ByteArrayOutputStream bytearrayoutputstream = new ByteArrayOutputStream();
        DataOutputStream dataoutputstream;
        (dataoutputstream = new DataOutputStream(bytearrayoutputstream)).writeBoolean(o_boolean_static_fld);
        dataoutputstream.writeBoolean(p_boolean_static_fld);
        dataoutputstream.writeUTF(a_java_lang_String_static_fld);
        e.a("p", 1, bytearrayoutputstream.toByteArray());
        return true;
        JVM INSTR pop ;
        e.i &= -2;
        return false;
    }

    private static void z()
    {
        if(!w_boolean_static_fld)
            au_int_static_fld = -1;
        r_boolean_static_fld = false;
        q_boolean_static_fld = false;
        for(int i1 = 0; i1 != a_boolean_array1d_static_fld.length; i1++)
            a_boolean_array1d_static_fld[i1] = true;

        as_int_static_fld = 0;
        at_int_static_fld = 0;
    }

    private static boolean b(int i1)
    {
        if(w_boolean_static_fld)
            return true;
        if(i1 >= au_int_static_fld)
            au_int_static_fld = i1;
        i1 = new ByteArrayOutputStream();
        DataOutputStream dataoutputstream;
        (dataoutputstream = new DataOutputStream(i1)).writeInt(au_int_static_fld);
        dataoutputstream.writeBoolean(r_boolean_static_fld);
        int j1 = 0;
        for(int k1 = 0; k1 != a_boolean_array1d_static_fld.length; k1++)
            j1 |= a_boolean_array1d_static_fld[k1] ? 1 << k1 : 0;

        dataoutputstream.writeInt(j1);
        dataoutputstream.writeInt(as_int_static_fld);
        dataoutputstream.writeInt(at_int_static_fld);
        e.a("g", 0, i1.toByteArray());
        q_boolean_static_fld = true;
        return true;
        JVM INSTR pop ;
        e.i &= -2;
        return false;
    }

    private static void A()
    {
        b_d_array1d_static_fld = new d[g_int_array1d_static_fld.length];
        if(b_a_static_fld == null)
            try
            {
                e.a("/b.mbf");
                b_a_static_fld = a(179, ((byte []) (null)), ((byte []) (null)), false, false);
                for(int i1 = 0; i1 != g_int_array1d_static_fld.length; i1++)
                    b_d_array1d_static_fld[i1] = d.a(g_int_array1d_static_fld[i1], 1);

                e.e();
                return;
            }
            catch(Exception _ex) { }
    }

    private static void a(int i1, int j1, int k1)
    {
        b_d_array1d_static_fld[k1].a(h_int_array1d_static_fld[k1], b_a_static_fld, i1, j1, 0);
    }

    private static void B()
    {
        byte abyte0[] = {
            0, 1, 2, 0, 1, 1
        };
        String as1[] = new String[6];
        as1[0] = c(1);
        as1[1] = c(2);
        as1[2] = c(4);
        as1[3] = c(3);
        as1[4] = c(5);
        as1[5] = ">>";
        e.a(abyte0);
    }

    private static void C()
    {
        if(i_int_array1d_static_fld == null)
            i_int_array1d_static_fld = new int[16];
        i_int_array1d_static_fld[0] = 0;
        i_int_array1d_static_fld[1] = 0;
        i_int_array1d_static_fld[2] = e.a_int_static_fld;
        i_int_array1d_static_fld[3] = e.b;
        i_int_array1d_static_fld[4] = 0;
        i_int_array1d_static_fld[5] = 0;
        i_int_array1d_static_fld[6] = e.a_int_static_fld;
        i_int_array1d_static_fld[7] = 16;
        i_int_array1d_static_fld[8] = 0;
        i_int_array1d_static_fld[9] = 16;
        i_int_array1d_static_fld[10] = e.a_int_static_fld;
        i_int_array1d_static_fld[11] = e.b - 16;
    }

    private static int b(int i1)
    {
        int j1 = 0;
        j1 = i1 << 2;
        aF = i_int_array1d_static_fld[j1];
        aG = i_int_array1d_static_fld[++j1];
        aH = i_int_array1d_static_fld[++j1];
        aI = i_int_array1d_static_fld[++j1];
        e.a(aF, aG, aH, aI);
        aJ = aH / 2;
        aK = aI / 2;
        j1 = aU;
        aU = i1;
        return j1;
    }

    private static void p(int i1)
    {
        b(0);
        C(i1);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, aH, aI);
    }

    private static void b(int i1, int j1, int k1)
    {
        if(i1 < 0)
        {
            return;
        } else
        {
            i1 = a_byte_array1d_static_fld[i1];
            a(j1, k1, i1);
            return;
        }
    }

    private static void D()
    {
        en = aN;
        ep = aP;
        eq = aQ;
        eo = aO;
    }

    private static void a(int i1, int j1, int k1, int l1, boolean flag)
    {
        s_boolean_static_fld = true;
        ay_int_static_fld = 0;
        t_boolean_static_fld = false;
        av_int_static_fld = 3;
        aw_int_static_fld = k1;
        ax_int_static_fld = l1;
        aB_int_static_fld = i1;
        aC_int_static_fld = j1;
        aD_int_static_fld = k1;
        aE_int_static_fld = l1;
        u_boolean_static_fld = flag;
        long l2 = a(aB_int_static_fld, aC_int_static_fld, aD_int_static_fld, aE_int_static_fld) >> 16;
        aA_int_static_fld = (az_int_static_fld = (1000 * (int)l2) / 192) + 1000;
        k_int_static_fld = 6;
    }

    private static void E()
    {
        for(int i1 = 0; i1 != b_d_array1d_static_fld.length; i1++)
            h_int_array1d_static_fld[i1] = b_d_array1d_static_fld[i1].a(h_int_array1d_static_fld[i1], b_int_static_fld);

    }

    private static void b(int i1, int j1, int k1, int l1, boolean flag)
    {
        if(j_boolean_static_fld)
        {
            if(v_boolean_static_fld = (e.f & 0x10200) != 0 && w_int_static_fld == 0)
            {
                if((aV += b_int_static_fld) < 1000)
                    v_boolean_static_fld = false;
            } else
            {
                aV = 0;
            }
        } else
        {
            v_boolean_static_fld = false;
            aV = 0;
        }
        s_boolean_static_fld = false;
        int i2 = 0;
        int j2 = 0;
        int k2 = 0;
        int l2 = 0;
        int i3 = 0;
        l2 = 0;
        int j3 = 0;
        j2 = i1 >> 1;
        k2 = j1 >> 1;
        i3 = aN + j2;
        j3 = aO + k2;
        switch(av_int_static_fld)
        {
        case 0: // '\0'
            i2 = C_int_static_fld;
            l2 = i1 / 5;
            l2 = B_int_static_fld + (z_int_static_fld >= 0 ? l2 : -l2);
            break;

        case 2: // '\002'
            i2 = ax_int_static_fld;
            l2 = aw_int_static_fld;
            break;

        case 3: // '\003'
            s_boolean_static_fld = true;
            if(ay_int_static_fld < az_int_static_fld)
            {
                l2 = aB_int_static_fld + (ay_int_static_fld * (aw_int_static_fld - aB_int_static_fld)) / az_int_static_fld;
                i2 = aC_int_static_fld + (ay_int_static_fld * (ax_int_static_fld - aC_int_static_fld)) / az_int_static_fld;
            } else
            if(ay_int_static_fld >= az_int_static_fld)
            {
                l2 = aw_int_static_fld;
                i2 = ax_int_static_fld;
            }
            t_boolean_static_fld = (ay_int_static_fld += b_int_static_fld) >= az_int_static_fld + 500;
            if(ay_int_static_fld >= aA_int_static_fld)
                if(u_boolean_static_fld)
                {
                    ay_int_static_fld = 0;
                    u_boolean_static_fld = false;
                    a(aD_int_static_fld, aE_int_static_fld, aB_int_static_fld, aC_int_static_fld, false);
                } else
                {
                    ay_int_static_fld = 0;
                    s_boolean_static_fld = false;
                    av_int_static_fld = 0;
                    b(e.a_int_static_fld, e.b, eI, eJ, true);
                    return;
                }
            break;
        }
        if(flag)
        {
            aY = l2 - i3 << 18;
            long l3;
            if((l3 = a_long_static_fld) > 16384L)
                l3 = 16384L;
            l2 = (aW += (int)((long)aY * l3 >> 16)) >> 16;
        } else
        {
            aW = l2 << 16;
        }
        if(v_boolean_static_fld)
            i2 = (i2 + k2) - 32;
        else
        if(av_int_static_fld == 0)
            i2 -= j1 / 4;
        if(flag)
        {
            aY = i2 - j3 << 18;
            long l4 = a_long_static_fld;
            if(G_int_static_fld > 0 && av_int_static_fld == 0)
                aY += G_int_static_fld;
            i2 = (aX += (int)((long)aY * l4 >> 16)) >> 16;
        } else
        {
            aX = i2 << 16;
        }
        aR = i1;
        aS = j1;
        if(aZ > 0)
        {
            if(aZ == 2000)
                aC();
            bb = (-bb * aZ) / 2000;
            bc = (-bc * aZ) / 2000;
            aZ -= a_int_static_fld;
            i2 += bb;
            l2 += bc;
        }
        if(ba > 0)
        {
            if(aZ == 2000)
                aC();
            ba -= a_int_static_fld;
            bb = -bb;
            i2 += bb;
            bc = -bc;
            l2 += bc;
        }
        aP = (aN = l2 - j2) + i1;
        aQ = (aO = i2 - k2) + j1;
        aL = l2;
        aM = i2;
        boolean flag1 = false;
        if(aN < 0)
        {
            aP = (aN = 0) + i1;
            flag1 = true;
        } else
        if(aP >= k1)
        {
            aN = (aP = k1 - 1) - i1;
            flag1 = true;
        }
        if(aO < 0)
        {
            aQ = (aO = 0) + j1;
            flag1 = true;
        } else
        if(aQ >= l1)
        {
            aO = (aQ = l1 - 1) - j1;
            flag1 = true;
        }
        if(flag1)
        {
            aW = aN + j2 << 16;
            aX = aO + k2 << 16;
        }
        if(ab_boolean_static_fld)
            aT = a(aN, aP, aO, aQ);
        y();
    }

    private static void a(DataInputStream datainputstream, int i1)
    {
        i1;
        JVM INSTR tableswitch 0 7: default 2454
    //                   0 48
    //                   1 49
    //                   2 510
    //                   3 653
    //                   4 766
    //                   5 1390
    //                   6 2286
    //                   7 2442;
           goto _L1 _L2 _L3 _L4 _L5 _L6 _L7 _L8 _L9
_L2:
        return;
_L3:
        DataInputStream datainputstream1 = datainputstream;
        try
        {
            int j7 = datainputstream1.readUnsignedShort();
            int k8 = datainputstream1.readUnsignedShort();
            int l9 = datainputstream1.readUnsignedByte();
            int l10 = datainputstream1.readUnsignedByte();
            int l11 = datainputstream1.readUnsignedByte();
            datainputstream1.readUnsignedByte();
            datainputstream1.readUnsignedByte();
            int k12 = datainputstream1.readUnsignedByte();
            int j14;
            a aa1[] = new a[j14 = datainputstream1.readUnsignedByte()];
            d ad1[] = new d[k12];
            int j18 = 0;
            byte abyte2[] = new byte[l11 << 1];
            int l19 = 0;
            for(int i3 = 0; i3 < j14; i3++)
            {
                datainputstream1.readUnsignedByte();
                int k20 = datainputstream1.readUnsignedShort();
                int i21;
                byte abyte4[] = new byte[i21 = datainputstream1.readUnsignedByte()];
                datainputstream = new byte[i21];
                for(int k5 = 0; k5 < i21; k5++)
                {
                    abyte4[k5] = datainputstream1.readByte();
                    datainputstream[k5] = datainputstream1.readByte();
                    abyte2[l19 << 1] = (byte)i3;
                    abyte2[(l19 << 1) + 1] = (byte)k5;
                    l19++;
                }

                aa1[i3] = a(k20, abyte4, ((byte []) (datainputstream)), true, false);
                datainputstream = datainputstream1.readUnsignedByte();
                for(int l5 = 0; l5 < datainputstream; l5++)
                {
                    i1 = datainputstream1.readUnsignedByte();
                    d d1 = new d(i1, i1, 1);
                    for(int l12 = 0; l12 < i1; l12++)
                    {
                        byte byte0 = datainputstream1.readByte();
                        int j21 = datainputstream1.readUnsignedShort();
                        d1.a(l12, l12, byte0, j21, 0, 0);
                    }

                    abyte2[l19 << 1] = (byte)(-i3 - 1);
                    abyte2[(l19 << 1) + 1] = (byte)j18;
                    l19++;
                    ad1[j18] = d1;
                    j18++;
                }

            }

            byte abyte3[] = new byte[k8 * j7];
            for(int j3 = 0; j3 < abyte3.length; j3++)
                abyte3[j3] = (byte)datainputstream1.readUnsignedByte();

            k8 = l10;
            j7 = l9;
            int i6 = k8;
            int k3 = j7;
            byte abyte1[] = abyte3;
            byte abyte0[] = abyte2;
            i1 = ad1;
            datainputstream = null;
            c_a_array1d_static_fld = aa1;
            m_d_array1d_static_fld = i1;
            ak_int_array1d_static_fld = new int[i1.length];
            for(datainputstream = 0; datainputstream < ak_int_array1d_static_fld.length; datainputstream++)
                ak_int_array1d_static_fld[datainputstream] = 1;

            d_byte_array1d_static_fld = abyte0;
            e_byte_array1d_static_fld = abyte1;
            eE = k3;
            eF = i6;
            eG = j7;
            eH = k8;
            eI = k3 * j7;
            eJ = (i6 + 1) * k8;
            return;
        }
        catch(Exception _ex)
        {
            return;
        }
_L4:
        i1 = datainputstream.readByte();
        datainputstream.readByte();
        datainputstream.readByte();
        int j1 = datainputstream.readUnsignedShort();
        int i2 = datainputstream.readUnsignedShort();
        int l3 = i2 << 4;
        ex = j1 << 4;
        ey = l3;
        ev = (ex << 16) / 8 + 32768 >> 16;
        ew = (ey << 16) / 4 + 32768 >> 16;
        if(i1 != 0)
        {
            DataInputStream datainputstream4 = datainputstream;
            int i4 = eF;
            int j2 = eE;
            ej = i4 << 4;
            ek = j2;
            el = i4;
            c_byte_array1d_static_fld = new byte[j2 * i4];
            datainputstream4.readFully(c_byte_array1d_static_fld);
            ab_boolean_static_fld = true;
        }
        c_a_static_fld = a(156, ((byte []) (null)), ((byte []) (null)), false, true);
        return;
_L5:
        DataInputStream datainputstream2;
        d_int_array1d_static_fld = new int[(am_int_static_fld = (datainputstream2 = datainputstream).readUnsignedByte()) * 6];
        for(int j4 = 0; j4 != am_int_static_fld; j4++)
        {
            int j6 = j4 * 6;
            d_int_array1d_static_fld[j6] = datainputstream2.readShort();
            d_int_array1d_static_fld[j6 + 1] = datainputstream2.readShort();
            d_int_array1d_static_fld[j6 + 2] = datainputstream2.readShort();
            d_int_array1d_static_fld[j6 + 3] = datainputstream2.readShort();
            d_int_array1d_static_fld[j6 + 4] = datainputstream2.readInt();
            d_int_array1d_static_fld[j6 + 5] = datainputstream2.readUnsignedByte();
        }

        return;
_L6:
        j_int_array1d_static_fld = new int[(bd = datainputstream.readUnsignedByte()) * 3];
        i1 = 0;
_L31:
        if(i1 == bd) goto _L11; else goto _L10
_L10:
        int k2;
        int k4;
        int k6;
        int k1 = i1 * 3;
        k2 = datainputstream.readShort();
        k4 = datainputstream.readShort();
        k6 = datainputstream.readUnsignedByte();
        j_int_array1d_static_fld[k1] = k2;
        j_int_array1d_static_fld[k1 + 1] = k4;
        j_int_array1d_static_fld[k1 + 2] = k6;
        k6;
        JVM INSTR lookupswitch 12: default 1258
    //                   0: 944
    //                   83: 1239
    //                   87: 956
    //                   88: 956
    //                   89: 956
    //                   90: 956
    //                   91: 956
    //                   174: 956
    //                   175: 956
    //                   176: 956
    //                   177: 956
    //                   178: 956;
           goto _L12 _L13 _L14 _L15 _L15 _L15 _L15 _L15 _L15 _L15 _L15 _L15 _L15
_L12:
        break; /* Loop/switch isn't completed */
_L13:
        bf = k2;
        be = k4;
        break; /* Loop/switch isn't completed */
_L15:
        int k7;
        int l8;
        int i10;
        int i11;
        i10 = k6;
        l8 = k4;
        k7 = k2;
        i11 = bw * 10;
        G_int_array1d_static_fld[i11] = k7;
        G_int_array1d_static_fld[i11 + 1] = l8;
        G_int_array1d_static_fld[i11 + 2] = i10;
        G_int_array1d_static_fld[i11 + 5] = 1;
        G_int_array1d_static_fld;
        i11 + 4;
          goto _L16
_L18:
        i10;
          goto _L17
_L16:
        boolean flag = false;
          goto _L18
_L17:
        byte byte1;
        JVM INSTR lookupswitch 10: default 1161
    //                   87: 1120
    //                   88: 1116
    //                   89: 1124
    //                   90: 1128
    //                   91: 1132
    //                   174: 1136
    //                   175: 1141
    //                   176: 1146
    //                   177: 1151
    //                   178: 1156;
           goto _L19 _L20 _L21 _L22 _L23 _L24 _L25 _L26 _L27 _L28 _L29
_L21:
        byte1 = 1;
          goto _L30
_L20:
        byte1 = 0;
          goto _L30
_L22:
        byte1 = 2;
          goto _L30
_L23:
        byte1 = 3;
          goto _L30
_L24:
        byte1 = 4;
          goto _L30
_L25:
        byte1 = 6;
          goto _L30
_L26:
        byte1 = 7;
          goto _L30
_L27:
        byte1 = 8;
          goto _L30
_L28:
        byte1 = 9;
          goto _L30
_L29:
        byte1 = 10;
          goto _L30
_L19:
        byte1 = -1;
_L30:
        byte1;
        JVM INSTR iastore ;
        G_int_array1d_static_fld[i11 + 8] = 0;
        G_int_array1d_static_fld[i11 + 6] = 0;
        G_int_array1d_static_fld[i11 + 9] = by;
        c(k7, l8, i10);
        G_int_array1d_static_fld[i11 + 7] = a(er, et, es, eu);
        bw++;
        break; /* Loop/switch isn't completed */
_L14:
        int i9 = k4;
        int l7 = k2;
        a(3, l7, i9, 0, 0, 0, 0);
        if(k6 >= 100 && k6 < 110)
        {
            int j10 = k6;
            int j9 = k4;
            int i8 = k2;
            int j11 = bx * 6;
            I_int_array1d_static_fld[j11] = i8;
            I_int_array1d_static_fld[j11 + 1] = j9;
            I_int_array1d_static_fld[j11 + 2] = 0;
            I_int_array1d_static_fld[j11 + 3] = j10;
            I_int_array1d_static_fld[j11 + 4] = 1;
            a(i8, j9, -16, 16, -32, 0, false);
            I_int_array1d_static_fld[j11 + 5] = a(er, et, es, eu);
            bx++;
        }
        i1++;
          goto _L31
_L11:
        return;
_L7:
        int l1;
        a_int_array2d_static_fld = new int[i1 = datainputstream.readUnsignedByte()][];
        k_int_array1d_static_fld = new int[i1];
        l1 = 0;
_L34:
        if(l1 == i1) goto _L33; else goto _L32
_L32:
        int l2 = datainputstream.readUnsignedByte();
        a_int_array2d_static_fld[l1] = new int[l2 << 1];
        for(int l4 = 0; l4 != l2 << 1; l4++)
            a_int_array2d_static_fld[l1][l4] = datainputstream.readShort();

        k_int_array1d_static_fld[l1] = datainputstream.readUnsignedByte();
        l2 = l1;
        int i5 = k_int_array1d_static_fld[l2];
        int l6 = a_int_array2d_static_fld[l2][0];
        int j8 = a_int_array2d_static_fld[l2][1];
        int k9 = a_int_array2d_static_fld[l2][2];
        int k10 = a_int_array2d_static_fld[l2][3];
        int k11 = 0;
        int i12 = 0;
        if(a_int_array2d_static_fld[l2].length > 4)
        {
            k11 = a_int_array2d_static_fld[l2][4];
            i12 = a_int_array2d_static_fld[l2][5];
        }
        switch(i5)
        {
        case 0: // '\0'
            boolean flag1 = false;
            an_int_static_fld = j8;
            break;

        case 206: 
            int i17 = k10;
            int l15 = k9;
            int k14 = j8;
            int i13 = l6;
            int k18 = bC * 6;
            J_int_array1d_static_fld[k18] = i13;
            J_int_array1d_static_fld[k18 + 1] = k14;
            i12 = ++bC * 6;
            J_int_array1d_static_fld[i12] = l15;
            J_int_array1d_static_fld[i12 + 1] = i17;
            bC++;
            J_int_array1d_static_fld[k18 + 2] = J_int_array1d_static_fld[i12 + 2] = 0;
            J_int_array1d_static_fld[k18 + 4] = J_int_array1d_static_fld[i12 + 4] = 1;
            J_int_array1d_static_fld[k18 + 5] = J_int_array1d_static_fld[i12 + 5] = 1;
            break;

        case 202: 
            int l18 = k11;
            int j17 = k10;
            int i16 = k9;
            int l14 = j8;
            int j13 = l6;
            a(0, j13, l14, i16, j17, l18, i12);
            break;

        case 205: 
            int i19 = k11;
            int k17 = k10;
            int j16 = k9;
            int i15 = j8;
            int k13 = l6;
            a(1, k13, i15, j16, k17, i19, i12);
            break;

        case 203: 
            int j19 = k11;
            int l17 = k10;
            int k16 = k9;
            int j15 = j8;
            int l13 = l6;
            a(2, l13, j15, k16, l17, j19, i12);
            break;
        }
        if(i5 < 20 || i5 >= 190)
            continue; /* Loop/switch isn't completed */
        int k19 = i5;
        int i18 = k10;
        int l16 = k9;
        int k15 = j8;
        int i14 = l6;
        i12 = bs * 11;
        B_int_array1d_static_fld[i12] = i14;
        B_int_array1d_static_fld[i12 + 1] = k15;
        B_int_array1d_static_fld[i12 + 2] = k19;
        int i20;
        B_int_array1d_static_fld[i12 + 3] = (i20 = k19) < 20 || i20 >= 30 ? -1 : 0;
        B_int_array1d_static_fld[i12 + 4] = 1;
        B_int_array1d_static_fld[i12 + 5] = 0;
        B_int_array1d_static_fld[i12 + 6] = 1;
        B_int_array1d_static_fld[i12 + 7] = k19 % 2 != 0 ? 0 : 1;
        B_int_array1d_static_fld[i12 + 10] = -1;
        switch(B_int_array1d_static_fld[i12 + 3])
        {
        case 0: // '\0'
            int k21 = k19;
            int l20 = i18;
            int j20 = l16;
            int l21 = bu * 9;
            C_int_array1d_static_fld[l21 + 2] = j20 / 16;
            C_int_array1d_static_fld[l21 + 3] = l20 / 16;
            C_int_array1d_static_fld[l21] = (C_int_array1d_static_fld[l21 + 2] << 4) + 8;
            C_int_array1d_static_fld[l21 + 1] = C_int_array1d_static_fld[l21 + 3] + 1 << 4;
            C_int_array1d_static_fld[l21 + 4] = k21;
            C_int_array1d_static_fld[l21 + 5] = 0;
            C_int_array1d_static_fld[l21 + 6] = 1;
            a(j20, l20, -32, 32, -32, 8, false);
            C_int_array1d_static_fld[l21 + 7] = a(er, et, es, eu);
            b(bu, true);
            B_int_array1d_static_fld[i12 + 9] = bu++;
            break;
        }
        a(i14, k15, -16, 16, -16, 16, false);
        B_int_array1d_static_fld[i12 + 8] = a(er, et, es, eu);
        bs++;
        l1++;
        if(true) goto _L34; else goto _L33
_L33:
        return;
_L8:
        DataInputStream datainputstream3;
        F_int_array1d_static_fld = new int[(bv = (datainputstream3 = datainputstream).readUnsignedByte()) * 7];
        for(int j5 = 0; j5 != bv; j5++)
        {
            int i7 = j5 * 7;
            short word0 = datainputstream3.readShort();
            short word1 = datainputstream3.readShort();
            short word2 = datainputstream3.readShort();
            short word3 = datainputstream3.readShort();
            int j12 = datainputstream3.readUnsignedByte();
            F_int_array1d_static_fld[i7] = word0;
            F_int_array1d_static_fld[i7 + 1] = word1;
            F_int_array1d_static_fld[i7 + 2] = word2;
            F_int_array1d_static_fld[i7 + 3] = word3;
            F_int_array1d_static_fld[i7 + 5] = 1;
            F_int_array1d_static_fld[i7 + 4] = j12;
            F_int_array1d_static_fld[i7 + 6] = a(word0, word0 + word2, word1, word1 + word3);
        }

        return;
_L9:
        j_int_array1d_static_fld = null;
        a_int_array2d_static_fld = null;
        k_int_array1d_static_fld = null;
_L1:
    }

    private static void F()
    {
        e_a_static_fld = a(168, ((byte []) (null)), ((byte []) (null)), false, false);
        (c_d_array1d_static_fld = new d[3])[0] = d.a(44, 0);
        c_d_array1d_static_fld[1] = d.a(43, 0);
        c_d_array1d_static_fld[2] = d.a(45, 0);
        l_int_array1d_static_fld = new int[35];
        m_int_array1d_static_fld = new int[6];
    }

    private static void G()
    {
        d_a_static_fld = null;
        l_int_array1d_static_fld = null;
        c_d_array1d_static_fld = null;
        m_int_array1d_static_fld = null;
        e_a_static_fld = null;
    }

    private static void a(int i1, int j1, int k1, int l1, int i2)
    {
        l1 = 35;
        do
        {
            if((l1 -= 7) < 0)
                break;
            if(l_int_array1d_static_fld[l1] != 0)
                continue;
            l_int_array1d_static_fld[l1] = 1;
            l_int_array1d_static_fld[l1 + 1] = i1;
            l_int_array1d_static_fld[l1 + 2] = 1;
            l_int_array1d_static_fld[l1 + 3] = j1 << 16;
            l_int_array1d_static_fld[l1 + 4] = 0;
            l_int_array1d_static_fld[l1 + 5] = k1;
            l_int_array1d_static_fld[l1 + 6] = i2;
            break;
        } while(true);
    }

    private static void H()
    {
        int i1 = 35;
        do
        {
            if((i1 -= 7) < 0)
                break;
            int j1;
            if((j1 = l_int_array1d_static_fld[i1]) != 0)
                if(l_int_array1d_static_fld[i1 + 6] > 0)
                {
                    l_int_array1d_static_fld[i1 + 6] -= b_int_static_fld;
                    if(l_int_array1d_static_fld[i1 + 6] < 0)
                        l_int_array1d_static_fld[i1 + 6] = 0;
                } else
                {
                    int k1;
                    if((k1 = l_int_array1d_static_fld[i1 + 4]) != 0)
                        l_int_array1d_static_fld[i1 + 3] += (int)((long)k1 * b_long_static_fld >> 16);
                    k1 = l_int_array1d_static_fld[i1 + 1];
                    int l1 = l_int_array1d_static_fld[i1 + 2];
                    if(((l1 = c_d_array1d_static_fld[k1].a(l1, b_int_static_fld)) & 3) == 0)
                        j1 = 0;
                    l_int_array1d_static_fld[i1] = j1;
                    l_int_array1d_static_fld[i1 + 1] = k1;
                    l_int_array1d_static_fld[i1 + 2] = l1;
                }
        } while(true);
    }

    private static void I()
    {
        int i1 = 35;
        do
        {
            if((i1 -= 7) < 0)
                break;
            if(l_int_array1d_static_fld[i1] != 0 && l_int_array1d_static_fld[i1 + 6] <= 0)
            {
                d_a_static_fld = e_a_static_fld;
                c_d_array1d_static_fld[l_int_array1d_static_fld[i1 + 1]].a(l_int_array1d_static_fld[i1 + 2], d_a_static_fld, (l_int_array1d_static_fld[i1 + 3] + 32768 >> 16) - aN, l_int_array1d_static_fld[i1 + 5] - aO, 0);
            }
        } while(true);
    }

    private static void q(int i1)
    {
        int j1 = 6;
        do
        {
            if((j1 -= 2) < 0)
                break;
            if(m_int_array1d_static_fld[j1] != 0)
                continue;
            m_int_array1d_static_fld[j1++] = 1;
            m_int_array1d_static_fld[j1] = i1;
            break;
        } while(true);
    }

    private static void J()
    {
        int i1 = 6;
        do
        {
            if((i1 -= 2) < 0)
                break;
            int j1;
            if((j1 = m_int_array1d_static_fld[i1]) != 0)
            {
                if(j1 == 1)
                {
                    if((m_int_array1d_static_fld[i1 + 1] -= b_int_static_fld) <= 0)
                        j1 = 2;
                } else
                if(j1 == 2)
                    j1 = 0;
                m_int_array1d_static_fld[i1] = j1;
            }
        } while(true);
    }

    private static void K()
    {
        C(-1);
        int i1 = 6;
        do
        {
            if((i1 -= 2) < 0)
                break;
            if(m_int_array1d_static_fld[i1] == 2)
                e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, e.a_javax_microedition_lcdui_Graphics_static_fld.getClipWidth(), e.a_javax_microedition_lcdui_Graphics_static_fld.getClipHeight());
        } while(true);
    }

    private static void f(int i1, int j1)
    {
        int k1;
        int l1 = (k1 = aE_int_array1d_static_fld)[i1 + 16];
        k1[i1 + 14] = 0;
        k1[i1 + 8] = j1;
        switch(j1)
        {
        case 200: 
            k1[i1 + 13] = d(l1, 0);
            j1 = i1;
            k1 = aE_int_array1d_static_fld[j1 + 2];
            int i2 = aE_int_array1d_static_fld[j1 + 3];
            aE_int_array1d_static_fld[j1 + 9] = a(k1 + -80, k1 + 80, i2 + -32, i2 + 16);
            j1 = 1;
            switch(l1)
            {
            case 1: // '\001'
            case 2: // '\002'
                j1 = 3;
                break;

            case 3: // '\003'
                j1 = 2;
                break;

            case 0: // '\0'
                j1 = 5;
                break;
            }
            f(i1, j1);
            return;

        case 1: // '\001'
            a(i1, a(l1, 0), a(l1));
            return;

        case 2: // '\002'
            a(i1, a(l1, 4), a(l1));
            return;

        case 3: // '\003'
            a(i1, a(l1, 1), a(l1));
            return;

        case 5: // '\005'
            return;

        case 6: // '\006'
            a(1, k1[i1], k1[i1 + 1], 0, 0);
            k1[i1 + 21] = 0;
            k1[i1 + 20] = 0;
            return;

        case 4: // '\004'
            a(i1, a(l1, 5), a(l1));
            return;

        case 7: // '\007'
            a(1, k1[i1], k1[i1 + 1], 0, 0);
            return;

        case 201: 
            a(i1, a(l1, 5), a(l1));
            j1 = k1[i1 + 12];
            boolean flag = j1 != -1;
            l1 = 8;
            byte byte0 = -16;
            k1 = k1[i1 + 1];
            j1 = k1[i1];
            if(flag)
            {
                l1 = -8;
                byte0 = 16;
            }
            for(int j2 = 0; j2 != 3; j2++)
            {
                int k2 = j1 + (byte0 >= l1 ? c(l1, byte0) : c(byte0, l1));
                int l2 = k1 + c(-32, 0);
                a(2, k2, l2, 0, c(0, 500));
            }

            j1 = i1;
            if(aE_int_array1d_static_fld[j1 + 17] == -1)
                aE_int_array1d_static_fld[j1 + 17] = 0;
            return;

        case 202: 
            k1[i1 + 15] = by;
            break;
        }
    }

    private static int[] a(int i1)
    {
        switch(i1)
        {
        case 2: // '\002'
            return r_int_array1d_static_fld;

        case 3: // '\003'
            return s_int_array1d_static_fld;

        case 0: // '\0'
            return p_int_array1d_static_fld;

        case 1: // '\001'
            return q_int_array1d_static_fld;
        }
        return null;
    }

    private static void g(int i1, int j1)
    {
        j1 = (j1 << 4) + (i1 << 2);
        bg = u_int_array1d_static_fld[j1];
        bh = u_int_array1d_static_fld[j1 + 1];
        bi = u_int_array1d_static_fld[j1 + 2];
        bj = u_int_array1d_static_fld[j1 + 3];
    }

    private static int a(int i1, int j1)
    {
        j1 = (j1 << 2) + i1;
        return t_int_array1d_static_fld[j1];
    }

    private static void a(int i1, boolean flag)
    {
        flag = w_int_array1d_static_fld[i1 + 2] + 32768 >> 16;
        int j1 = w_int_array1d_static_fld[i1 + 4];
        a(1, flag, j1, 0, 0);
        w_int_array1d_static_fld[i1] = 0;
        bk--;
    }

    private static int a(int i1, int j1, int k1, int l1, int i2, int j2, boolean flag)
    {
        i1 = flag ? i1 - l1 : i1 + k1;
        k1 = l1 - k1;
        l1 = j2 - i2;
        j1 += i2;
        k1 = (i1 = i1) + k1;
        l1 = (j1 = j1) + l1;
        i2 = 0;
_L5:
        if(i2 == 10) goto _L2; else goto _L1
_L1:
        j2 = i2 << 3;
        if(w_int_array1d_static_fld[j2] == 0)
            continue; /* Loop/switch isn't completed */
        flag = j2;
        bl = w_int_array1d_static_fld[flag + 2] + 32768 >> 16;
        bm = w_int_array1d_static_fld[flag + 4];
        int k2 = w_int_array1d_static_fld[flag + 1];
        k2 = b_byte_array1d_static_fld[k2] & 0xff;
        bn = bl - k2;
        bo = bl + k2;
        bp = bm - k2;
        bq = bm + k2;
        flag = (int)((long)w_int_array1d_static_fld[flag + 3] * b_long_static_fld >> 16 >> 16);
        JVM INSTR ifle 195;
           goto _L3 _L4
_L3:
        break MISSING_BLOCK_LABEL_183;
_L4:
        break MISSING_BLOCK_LABEL_195;
        bn -= ((flag) ? 1 : 0);
        break MISSING_BLOCK_LABEL_204;
        bo -= ((flag) ? 1 : 0);
        if(bn <= k1 && bo >= i1 && bp <= l1 && bq >= j1)
        {
            a(j2, true);
            return w_int_array1d_static_fld[j2 + 1];
        }
        i2++;
          goto _L5
_L2:
        return -1;
    }

    private static void h(int i1, int j1)
    {
        i1 *= 11;
        B_int_array1d_static_fld[i1 + 5] = j1;
        B_int_array1d_static_fld[i1 + 6] = A_int_array1d_static_fld[j1 * 3 + 1];
    }

    private static void b(int i1, boolean flag)
    {
        i1 *= 9;
        int j1 = C_int_array1d_static_fld[i1 + 2];
        for(int k1 = i1 = C_int_array1d_static_fld[i1 + 3]; k1 != i1 - 2; k1--)
        {
            int l1 = b(j1, k1);
            if(flag)
                l1 |= 0x20;
            else
                l1 &= 0xffffffdf;
            int j2 = l1;
            int i2 = k1;
            l1 = j1;
            c_byte_array1d_static_fld[ek * i2 + l1] = (byte)j2;
        }

    }

    private static void c(int i1, int j1, int k1)
    {
        switch(k1)
        {
        case 87: // 'W'
        case 88: // 'X'
        case 89: // 'Y'
        case 174: 
        case 175: 
        case 176: 
        case 177: 
        case 178: 
            a(i1, j1, -5, 5, -8, -2, false);
            return;

        case 90: // 'Z'
        case 91: // '['
            a(i1, j1, -8, 8, -8, 8, false);
            break;
        }
    }

    private static int c(int i1)
    {
        byte byte0 = 0;
        switch(i1)
        {
        case 0: // '\0'
        case 3: // '\003'
            byte0 = 0;
            break;

        case 1: // '\001'
            byte0 = 1;
            break;

        case 2: // '\002'
            byte0 = 2;
            break;
        }
        return byte0;
    }

    private static void i(int i1, int j1)
    {
        J_int_array1d_static_fld[i1 + 2] = j1;
        J_int_array1d_static_fld[i1 + 3] = 0;
        byte byte0 = 0;
        switch(j1)
        {
        case 0: // '\0'
            byte0 = 1;
            break;

        case 1: // '\001'
            byte0 = 0;
            break;

        case 2: // '\002'
            byte0 = 2;
            break;

        case 3: // '\003'
            byte0 = 3;
            break;

        case 4: // '\004'
        case 5: // '\005'
        case 6: // '\006'
            byte0 = 4;
            break;
        }
        J_int_array1d_static_fld[i1 + 4] = byte0;
        J_int_array1d_static_fld[i1 + 5] = 1;
    }

    private static int a(int i1, int j1, int k1, int l1, int i2, int j2)
    {
        i1 = (bT = (bT + 1) % 8) << 4;
        L_int_array1d_static_fld[i1] = 1;
        L_int_array1d_static_fld[i1 + 1] = 1;
        L_int_array1d_static_fld[i1 + 2] = L_int_array1d_static_fld[i1 + 3] = j1;
        L_int_array1d_static_fld[i1 + 4] = k1;
        L_int_array1d_static_fld[i1 + 5] = L_int_array1d_static_fld[i1 + 6] = 16;
        L_int_array1d_static_fld[i1 + 7] = L_int_array1d_static_fld[i1 + 8] = 192;
        L_int_array1d_static_fld[i1 + 9] = 0;
        L_int_array1d_static_fld[i1 + 10] = l1;
        L_int_array1d_static_fld[i1 + 11] = i2;
        L_int_array1d_static_fld[i1 + 12] = j2;
        L_int_array1d_static_fld[i1 + 13] = 0;
        L_int_array1d_static_fld[i1 + 14] = 1;
        L_int_array1d_static_fld[i1 + 15] = -1;
        return bT;
    }

    private static void r(int i1)
    {
        int j1 = 0;
        int k1 = 0;
        int l1 = 0;
        int i2 = 0;
        int j2 = 0;
        int k2 = 0;
        int i3 = 0;
        int j3 = 0;
        int l3 = W_int_array1d_static_fld[i1 << 1] >> 16;
        int j4 = W_int_array1d_static_fld[(i1 << 1) + 1] >> 16;
        j1 = aa_int_array1d_static_fld[i1 << 1];
        i1 = aa_int_array1d_static_fld[(i1 << 1) + 1];
        j_d_array1d_static_fld[j1].a(g_a_static_fld);
        j1 = d.c;
        k1 = d.a;
        l1 = d.b;
        i2 = d.d;
        if(i1 == 1)
        {
            j2 = j4 + j1;
            k2 = l3 + k1;
            i3 = l3 + l1;
            j3 = j4 + i2;
        } else
        if(i1 == 2)
        {
            j2 = j4 + j1;
            j3 = j4 + i2;
            k2 = l3 - l1;
            i3 = l3 - k1;
        } else
        if(i1 == 3)
        {
            j2 = j4 + j1;
            i3 = l3 - k1;
            k2 = l3 + k1;
            j3 = j4 + i2;
        }
        l1 = i3;
        k1 = j3;
        j1 = k2;
        i1 = j2;
        i3 = 0;
        for(int l2 = 0; l2 < 1; l2++)
        {
            int k3 = c(j1, l1);
            int i4 = c(i1, k1);
            a(2, k3, i4, 0, i3);
            i3 += 500;
        }

    }

    private static void L()
    {
        V_int_array1d_static_fld = null;
        W_int_array1d_static_fld = null;
        ac_int_array1d_static_fld = null;
        ab_int_array1d_static_fld = null;
        g_a_static_fld = null;
        j_d_array1d_static_fld = null;
        S_int_array1d_static_fld = null;
        bV = 0;
        A_boolean_static_fld = false;
        B_boolean_static_fld = false;
        bW = 0;
        bX = 0;
        bY = 0;
        bZ = 0;
        cq = 0;
        cs = 0;
    }

    private static void s(int i1)
    {
        switch(i1)
        {
        case 1: // '\001'
            C_boolean_static_fld = true;
            ch = 0;
            A_boolean_static_fld = true;
            B_boolean_static_fld = true;
            for(int j1 = 0; j1 < cf - 1; j1++)
            {
                int k1 = j1;
                aa_int_array1d_static_fld[(k1 << 1) + 1] &= -5;
            }

            v(0);
            break;

        case 2: // '\002'
            ca--;
            ch = 0;
            z_boolean_static_fld = false;
            q(0);
            q(250);
            break;

        case 4: // '\004'
            ch = 0;
            break;

        case 7: // '\007'
            co = 0;
            cp = 0;
            q(0);
            q(100);
            break;

        case 8: // '\b'
            q(0);
            break;
        }
        switch(bV)
        {
        case 1: // '\001'
            switch(i1)
            {
            case 1: // '\001'
                bW = 0xb50000;
                bX = 0x600000;
                break;

            case 10: // '\n'
                aa_int_array1d_static_fld[0] = 1;
                t(1);
                t(2);
                t(4);
                break;

            case 2: // '\002'
                aa_int_array1d_static_fld[0] = 2;
                u(1);
                break;

            case 3: // '\003'
                aa_int_array1d_static_fld[0] = 4;
                u(2);
                break;
            }
            break;
        }
        cq = i1;
        cr = 0;
    }

    private static void M()
    {
        if(bV == 0 || !A_boolean_static_fld)
            return;
        bY += (0 * b_int_static_fld) / 1000;
        bZ += (0 * b_int_static_fld) / 1000;
        if(bY > 0 && bY > 0)
            bY = 0;
        if(bY < 0 && bY < 0)
            bY = 0;
        if(bZ > 0 && bZ > 0)
            bZ = 0;
        if(bZ < 0 && bZ < 0)
            bZ = 0;
        bW += (bY * b_int_static_fld) / 1000;
        bX += (bZ * b_int_static_fld) / 1000;
        if((ct += b_int_static_fld) >= cv && cv != 0)
            v(cu);
        a(false);
        if(z_boolean_static_fld)
            if((ci += b_int_static_fld) >= cj)
            {
                bW = cm;
                bX = cn;
                z_boolean_static_fld = false;
            } else
            {
                int i1;
                int k2 = (i1 = (int)a(ci << 16, cj << 16)) * (cm - ck >> 16);
                int k3 = i1 * (cn - cl >> 16);
                bW = ck + k2;
                bX = cl + k3;
            }
        cd += b_int_static_fld;
        W_int_array1d_static_fld[ce << 1] = bW;
        W_int_array1d_static_fld[(ce << 1) + 1] = bX;
        for(int j1 = 0; j1 != U_int_array1d_static_fld.length; j1 += 2)
        {
            int l2 = U_int_array1d_static_fld[j1] << 1;
            int l3 = U_int_array1d_static_fld[j1 + 1] << 1;
            W_int_array1d_static_fld[l3] = W_int_array1d_static_fld[l2] + V_int_array1d_static_fld[l3];
            W_int_array1d_static_fld[l3 + 1] = W_int_array1d_static_fld[l2 + 1] + V_int_array1d_static_fld[l3 + 1];
        }

        for(int k1 = 0; k1 < X_int_array1d_static_fld.length; k1 += 6)
        {
            int i3 = k1 / 6;
            if((ch & 1 << i3) == 0)
                continue;
            int i4 = X_int_array1d_static_fld[k1];
            i3 = W_int_array1d_static_fld[i4 << 1] >> 16;
            int j4 = W_int_array1d_static_fld[(i4 << 1) + 1] >> 16;
            int k4 = X_int_array1d_static_fld[k1 + 1];
            int j5 = X_int_array1d_static_fld[k1 + 4];
            int l4 = X_int_array1d_static_fld[k1 + 2];
            int i5 = X_int_array1d_static_fld[k1 + 3];
            int k5 = X_int_array1d_static_fld[k1 + 5];
            int l5 = 0;
            a(i3, j4, j5, l4, k4, i5, false);
            if((k5 & 1) != 0)
            {
                a(0);
                if(e())
                    l5 = 1;
            }
            if((k5 & -2) != 0)
            {
                if((i3 = a(i3, j4, j5, l4, k4, i5, false)) == 0 || i3 == 1)
                    l5 |= 4;
                if(i3 == 8 || i3 == 9)
                    l5 |= 8;
                if(i3 == 12 || i3 == 13)
                    l5 |= 0x10;
                if(i3 == 4 || i3 == 5)
                    l5 |= 0x100;
            }
            if(l5 == 0)
                continue;
            j4 = k5;
            i4 = l5;
            i3 = i4;
            if(((i4 &= j4) & -2) != 0)
            {
                s(2);
                r(i3);
            }
            if((i4 & 1) != 0)
                c(cb, 1);
        }

        for(int l1 = 0; l1 < j_d_array1d_static_fld.length; l1++)
            S_int_array1d_static_fld[l1] = j_d_array1d_static_fld[l1].a(S_int_array1d_static_fld[l1], b_int_static_fld);

        int i2 = (ca * 0x280000) / cx;
        if(cy > i2)
        {
            cy -= (b_int_static_fld * 0x100000) / 1000;
            D_boolean_static_fld = !D_boolean_static_fld;
            if(cy < i2)
                cy = i2;
        } else
        {
            D_boolean_static_fld = true;
        }
        cr += b_int_static_fld;
        switch(cq)
        {
        case 2: // '\002'
            if(ca <= 0)
                s(7);
            break;

        case 7: // '\007'
            if(cr > 5000)
                s(8);
            break;

        case 8: // '\b'
            if(cr > 500)
            {
                L();
                k_int_static_fld = 9;
            }
            break;
        }
        switch(cq)
        {
        case 7: // '\007'
            if(cr > 50 * cp)
            {
                cp++;
                r(c(0, cf - 2));
            }
            if(cr > 0)
            {
                co++;
                int j2 = (cr - 5000) + 5000;
                int j3 = 0;
                j3 = ((5 * (5000 - j2)) / 5000) * 3 + 2;
                C_boolean_static_fld = !(C_boolean_static_fld = co % j3 >= j3 >> 1);
            }
            break;
        }
        switch(bV)
        {
        case 1: // '\001'
            switch(cq)
            {
            case 1: // '\001'
                s(10);
                break;

            case 2: // '\002'
                if(cr > 1000)
                    s(3);
                break;

            case 3: // '\003'
                if(cr > 1000)
                    s(10);
                break;
            }
            switch(cq)
            {
            default:
                break;

            case 10: // '\n'
                if(!z_boolean_static_fld)
                {
                    if(bW == 0xb50000)
                    {
                        d(0x300000, bX, 0x200000);
                        u(4);
                        return;
                    }
                    d(0xb50000, bX, 0x200000);
                    u(3);
                }
                break;
            }
            break;
        }
    }

    private static void d(int i1, int j1, int k1)
    {
        ck = bW;
        cl = bX;
        cm = i1;
        cn = j1;
        long l1 = a(ck >> 16, cl >> 16, cm >> 16, cn >> 16);
        ci = 0;
        if((cj = (int)((l1 * 1000L) / (long)k1)) == 0)
        {
            bW = cm;
            bX = cn;
            z_boolean_static_fld = false;
            return;
        } else
        {
            z_boolean_static_fld = true;
            return;
        }
    }

    private static void t(int i1)
    {
        ch |= i1;
    }

    private static void u(int i1)
    {
        if(cu != i1 || 1000 != cv)
        {
            a(true);
            cu = i1;
            cv = 1000;
            ct = 0;
            cw = 3;
        }
    }

    private static void a(boolean flag)
    {
        int i2 = 0x10000;
        if(cv == 0)
            i2 = 0x10000;
        else
            switch(cw)
            {
            case 0: // '\0'
                i2 = (ct << 16) / cv;
                break;

            case 3: // '\003'
                i2 = (int)a(ct << 16, cv << 16);
                break;
            }
        for(int j2 = 0; j2 < ac_int_array1d_static_fld.length; j2 += 2)
        {
            int i1 = ab_int_array1d_static_fld[j2] >> 16;
            int j1 = ab_int_array1d_static_fld[j2 + 1] >> 16;
            int k1 = Y_int_array1d_static_fld[cu * cg + j2];
            int l1 = Y_int_array1d_static_fld[cu * cg + j2 + 1];
            k1 = i2 * (k1 - i1);
            l1 = i2 * (l1 - j1);
            ac_int_array1d_static_fld[j2] = (i1 << 16) + k1;
            ac_int_array1d_static_fld[j2 + 1] = (j1 << 16) + l1;
        }

        flag = flag ? ((boolean) (ab_int_array1d_static_fld)) : ((boolean) (V_int_array1d_static_fld));
        for(int k2 = 0; k2 < ac_int_array1d_static_fld.length; k2 += 2)
        {
            flag[k2] = ac_int_array1d_static_fld[k2];
            flag[k2 + 1] = ac_int_array1d_static_fld[k2 + 1];
        }

    }

    private static void v(int i1)
    {
        cs = i1;
        ct = 0;
        cu = i1;
        cv = 0;
        for(i1 = 0; i1 < ab_int_array1d_static_fld.length; i1++)
            ab_int_array1d_static_fld[i1] = Y_int_array1d_static_fld[cs * cg + i1] << 16;

    }

    private static void w(int i1)
    {
        cz = i1;
        b(0);
        cA = 500;
        cB = aH;
    }

    private static boolean b()
    {
        b(0);
        boolean flag = true;
        if(cA < 0)
        {
            cA = 0;
            flag = false;
        }
        if((cB = (aH * cA) / 500) < 0)
            cB = 0;
        cA -= b_int_static_fld;
        return flag;
    }

    private static void b(boolean flag)
    {
        E_boolean_static_fld = false;
        F_boolean_static_fld = flag;
    }

    private static void a(int i1, boolean flag, boolean flag1)
    {
        E_boolean_static_fld = true;
        if(flag1)
            a(true);
        c(i1);
        if(flag)
        {
            y(e.b / 2 - i1 / 2);
            return;
        } else
        {
            y((e.b * 52) / 100);
            return;
        }
    }

    private static void c(int i1, boolean flag)
    {
        E_boolean_static_fld = true;
        a(true);
        c(i1 + 8);
        flag = e.b - i1 >> 1;
        y(flag -= 6);
        cQ = dA + 5;
    }

    private static void N()
    {
        if(F_boolean_static_fld)
            p(0xff000000);
        if(E_boolean_static_fld)
            c(true);
    }

    private static void O()
    {
        if(E_boolean_static_fld)
            a(true);
    }

    private static void a(String s1, String as1[], int ai1[], int i1, int j1, int k1, int l1, int i2, 
            int j2)
    {
label0:
        {
            b(0);
            ad_int_array1d_static_fld = ai1;
            cF = 0x10200;
            cG = 32776;
            d_java_lang_String_array1d_static_fld = null;
            cJ = 0;
            cI = 0;
            ae_int_array1d_static_fld = new int[as1.length];
            k1 -= b_a_static_fld.a(cE) + 4;
            ai1 = 0;
            if(s1 != null)
            {
                ai1 = null;
                ai1 = (d_java_lang_String_array1d_static_fld = a(s1, k1 - 6)).length * eR + 6;
                if(a(d_java_lang_String_array1d_static_fld) > cJ)
                    cJ = a(d_java_lang_String_array1d_static_fld);
            }
            cM = -1;
            j1 = 0;
            l1 = null;
            for(i2 = 0; i2 < as1.length; i2++)
            {
                if(ad_int_array1d_static_fld[i2] == 2)
                    continue;
                l1 = a(as1[i2], k1 - (b_a_static_fld.a(cC) + 2 << 1));
                ae_int_array1d_static_fld[i2] = a(l1);
                if(ae_int_array1d_static_fld[i2] > cJ)
                    cJ = ae_int_array1d_static_fld[i2];
                if(cM == -1)
                    cM = i2;
                j1 += l1.length;
            }

            e_java_lang_String_array1d_static_fld = new String[j1];
            ag_int_array1d_static_fld = new int[j1];
            af_int_array1d_static_fld = new int[as1.length];
            i2 = 0;
            for(j1 = 0; j1 < as1.length; j1++)
            {
                af_int_array1d_static_fld[j1] = i2;
                if(ad_int_array1d_static_fld[j1] == 2)
                    continue;
                l1 = a(as1[j1], k1 - (b_a_static_fld.a(cC) + 2 << 1));
                for(j2 = 0; j2 < l1.length; j2++)
                {
                    e_java_lang_String_array1d_static_fld[i2 + j2] = l1[j2];
                    ag_int_array1d_static_fld[i2 + j2] = ad_int_array1d_static_fld[j1];
                }

                i2 += l1.length;
            }

            cK = eR;
            cI += e_java_lang_String_array1d_static_fld.length * cK;
            j1 = b_a_static_fld.b(cD) << 1;
            if(cI > aI - ai1)
                cL = (aI - ai1 - j1) / cK;
            else
                cL = e_java_lang_String_array1d_static_fld.length;
            cI = (cL = 2 >= cL ? cL : 2) * cK;
            if(s1 != null)
                cI += 2 * eR;
            cN = 0;
            if(cL < e_java_lang_String_array1d_static_fld.length)
                cI += j1;
            cN += (ai1 + (aI - ai1 >> 1)) - (cI >> 1);
            cH = i1 <= 0 ? 0 : i1;
            if(cL < e_java_lang_String_array1d_static_fld.length)
            {
                cO = af_int_array1d_static_fld[cH] - (cL >> 1);
                if(e_java_lang_String_array1d_static_fld.length - cO < cL)
                {
                    cO = e_java_lang_String_array1d_static_fld.length - cL;
                    break label0;
                }
                if(cO >= 0)
                    break label0;
            }
            cO = 0;
        }
        cJ += b_a_static_fld.a(cE) + 2 << 1;
        I_boolean_static_fld = true;
    }

    private static int a()
    {
        int i1 = e.d;
        int j1 = -1;
        boolean flag = (i1 & cF) != 0;
        boolean flag3 = (i1 & cG) != 0;
        i1 = (i1 & 0x20040) == 0 && e.c != 0 ? 0 : 1;
        if(!flag && !flag3 && i1 == 0)
            return -1;
        if(flag)
        {
            i1 = cH;
            boolean flag1 = false;
            do
            {
                if(i1 >= ad_int_array1d_static_fld.length - 1)
                    break;
                i1++;
                if(ad_int_array1d_static_fld[i1] == 2)
                    continue;
                flag1 = true;
                break;
            } while(true);
            if(flag1)
            {
                cH = i1;
                i1 = cL - 1 >> 1;
                cO = af_int_array1d_static_fld[cH] - (cL >> 1);
                if(af_int_array1d_static_fld[cH] + i1 >= e_java_lang_String_array1d_static_fld.length)
                    cO = e_java_lang_String_array1d_static_fld.length - cL;
                if(cO < 0)
                    cO = 0;
            }
        } else
        if(flag3)
        {
            i1 = cH;
            boolean flag2 = false;
            do
            {
                if(i1 <= 0)
                    break;
                i1--;
                if(ad_int_array1d_static_fld[i1] == 2)
                    continue;
                flag2 = true;
                break;
            } while(true);
            if(flag2)
            {
                cH = i1;
                cO = af_int_array1d_static_fld[cH] - (cL >> 1);
                if(e_java_lang_String_array1d_static_fld.length - cO < cL)
                    cO = e_java_lang_String_array1d_static_fld.length - cL;
                else
                if(cO < 0)
                    cO = 0;
            }
        } else
        if(i1 != 0 && (ad_int_array1d_static_fld[cH] == 0 || ad_int_array1d_static_fld[cH] == 4))
            j1 = cH;
        if(cL == e_java_lang_String_array1d_static_fld.length)
            cO = 0;
        return j1;
    }

    private static void P()
    {
        b(0);
        Q();
    }

    private static void Q()
    {
        int i1 = cN;
        if(d_java_lang_String_array1d_static_fld != null)
        {
            int j1 = 0;
            String as1[] = d_java_lang_String_array1d_static_fld;
            j1 = i1;
            if(as1 != null)
            {
                D(3);
                a(as1, 0, aJ, j1 + 3, 17);
            }
            i1 += eR << 1;
        }
        int k1 = (25 * e.a_int_static_fld) / 100 + -6;
        D(0);
        if(cL < e_java_lang_String_array1d_static_fld.length)
        {
            i1 += b_a_static_fld.b(cD);
            if(cO > 0)
                a(aJ, i1 + -2, 5);
        }
        for(int l1 = cO; l1 < cO + cL && l1 < e_java_lang_String_array1d_static_fld.length; l1++)
        {
            if(ag_int_array1d_static_fld[l1] == 0 || ag_int_array1d_static_fld[l1] == 4)
            {
                int i2 = -1;
                int k2 = cH;
                do
                {
                    if(++k2 >= af_int_array1d_static_fld.length)
                        break;
                    if(ad_int_array1d_static_fld[k2] == 2)
                        continue;
                    i2 = k2;
                    break;
                } while(true);
                if(af_int_array1d_static_fld[cH] <= l1 && (i2 == -1 || af_int_array1d_static_fld[i2] > l1))
                    C(0xff00a000);
                else
                    C(-1);
            } else
            if(ag_int_array1d_static_fld[l1] == 3)
                C(0xff00a000);
            else
                C(0xffa0c010);
            if(ag_int_array1d_static_fld[l1] != 4 || 0 == (g_int_static_fld / 500) % 2)
                a(e_java_lang_String_array1d_static_fld[l1], k1, i1, 20);
            if(af_int_array1d_static_fld[cH] == l1)
            {
                int j2 = 0;
                int l2 = -1;
                j2 = cH;
                do
                {
                    if(++j2 >= af_int_array1d_static_fld.length)
                        break;
                    if(ad_int_array1d_static_fld[j2] == 2)
                        continue;
                    l2 = j2;
                    break;
                } while(true);
                if(l2 == -1)
                    j2 = e_java_lang_String_array1d_static_fld.length - af_int_array1d_static_fld[cH];
                else
                    j2 = af_int_array1d_static_fld[l2] - af_int_array1d_static_fld[cH];
                j2 = i1 + ((j2 - 1) * eR >> 1);
                l2 = b_a_static_fld.a(cC);
                j2 += (9 * eS) / 10 + (b_a_static_fld.b(cC) >> 1);
                a((25 * e.a_int_static_fld) / 100 - l2 - 1, j2, 1);
            }
            i1 += eR;
        }

        if(cO + cL < e_java_lang_String_array1d_static_fld.length)
            a(aJ, i1 + 8, 6);
    }

    private static void R()
    {
        ad_int_array1d_static_fld = null;
        ae_int_array1d_static_fld = null;
        d_java_lang_String_array1d_static_fld = null;
        e_java_lang_String_array1d_static_fld = null;
        af_int_array1d_static_fld = null;
    }

    private static void a(String as1[], int ai1[], a a1, int i1, int j1, int k1, int l1, int i2, 
            boolean flag)
    {
        cW = 3;
        cV = i2;
        cU = 0;
        cP = i1;
        cQ = j1;
        cR = k1;
        cS = l1;
        if(ai1 == null)
        {
            ai1 = new int[as1.length << 1];
            for(a1 = 0; a1 < as1.length; a1++)
            {
                ai1[a1 << 1] = 0;
                ai1[(a1 << 1) + 1] = a1;
            }

        }
        ah_int_array1d_static_fld = ai1;
        f_java_lang_String_array1d_static_fld = as1;
        cT = 1;
        cZ = 0;
        cX = 0;
        cY = 0;
        a_java_util_Vector_static_fld = new Vector(20);
        b_java_util_Vector_static_fld = new Vector(20);
        da = 0;
        T();
        dd = 0;
        de = 0;
        db = 0;
        dc = 2000;
        H_boolean_static_fld = G_boolean_static_fld = flag;
    }

    private static void S()
    {
        int i1 = dd + 2;
        int i2 = cS;
        int l1 = cR;
        int k1 = cQ;
        int j1 = 0;
        aF = cP;
        aG = k1;
        aH = l1;
        aI = i2;
        e.a(aF, aG, aH, aI);
        aJ = aH / 2;
        aK = aI / 2;
        j1 = 0;
        if((cV & 1) != 0)
            j1 = 0 + (cR >> 1);
        if((cV & 8) != 0)
            j1 += cR;
        if((cV & 2) != 0)
            i1 += cS - da >> 1;
        if((cV & 0x20) != 0)
            i1 += cS - da;
        k1 = cV & 0xd | 0x10;
        l1 = cX;
        if(G_boolean_static_fld)
            dg = cY;
        else
            dg = cX;
        i2 = 0;
        do
        {
            if(l1 <= dg && l1 != cY)
            {
                int j2;
                switch(j2 = ((Integer)b_java_util_Vector_static_fld.elementAt(l1)).intValue())
                {
                case 0: // '\0'
                case 1: // '\001'
                    switch(j2)
                    {
                    case 1: // '\001'
                        D(cW);
                        break;

                    default:
                        D(0);
                        break;
                    }
                    i2 = ((Integer)b_java_util_Vector_static_fld.elementAt(l1 + 1)).intValue();
                    i2 = (String)a_java_util_Vector_static_fld.elementAt(i2);
                    if(H_boolean_static_fld)
                        j2 = i2.length() - 1;
                    else
                        j2 = ((Integer)b_java_util_Vector_static_fld.elementAt(l1 + 2)).intValue();
                    if(i2.length() > 0)
                        a(i2.substring(0, j2 + 1), j1, i1, k1);
                    if(j2 + 1 != i2.length())
                    {
                        i2 = 0;
                        if(df > 100)
                        {
                            j2++;
                            b_java_util_Vector_static_fld.setElementAt(new Integer(j2), l1 + 2);
                        }
                    } else
                    {
                        dg += 3;
                        i1 += eR;
                        i2 = 1;
                    }
                    l1 += 3;
                    break;

                case 7: // '\007'
                    int k2 = ((Integer)b_java_util_Vector_static_fld.elementAt(l1 + 1)).intValue();
                    a(((a) (null)), k2, j1, i1, k1);
                    i1 += null.b(k2);
                    l1 += 2;
                    dg += 2;
                    break;

                case 10: // '\n'
                    i1 += eR;
                    l1++;
                    dg++;
                    break;
                }
                continue;
            }
            if(i2 != 0 && l1 >= dg && l1 == cY)
                H_boolean_static_fld = true;
            break;
        } while(true);
    }

    private static boolean c()
    {
        df += b_int_static_fld;
        cU += b_int_static_fld;
        if(cT == 0)
        {
            if(cU > 5000)
                T();
            return cZ < ah_int_array1d_static_fld.length || cY != cX;
        }
        if(cT == 1)
            return cZ < ah_int_array1d_static_fld.length || cY != b_java_util_Vector_static_fld.size();
        if(cS - da >= 0)
            return false;
        switch(db)
        {
        default:
            break;

        case 1: // '\001'
            if((dd = (de = (int)((long)de - a(40 * b_int_static_fld))) >> 16) <= cS - da)
            {
                db = 0;
                dc = 2000;
                de = (dd = cS - da) << 16;
            }
            break;

        case 2: // '\002'
            if((dd = (de = (int)((long)de + a(40 * b_int_static_fld))) >> 16) >= 0)
            {
                db = 0;
                dc = 2000;
                dd = 0;
                de = 0;
            }
            break;

        case 0: // '\0'
            if((dc -= b_int_static_fld) >= 0)
                break;
            if(dd >= 0)
                db = 1;
            else
                db = 2;
            dc = 0;
            break;

        case 3: // '\003'
            if((dc -= b_int_static_fld) < 0)
            {
                db = 1;
                dc = 0;
            }
            break;
        }
        return false;
    }

    private static void T()
    {
        int i1 = 0;
        boolean flag = false;
        boolean flag1 = false;
        int l1;
        for(l1 = 0; cZ < ah_int_array1d_static_fld.length && (cT == 2 || !flag && i1 + l1 <= cS); cZ += 2)
        {
            boolean flag2 = true;
            switch(ah_int_array1d_static_fld[cZ])
            {
            case -1: 
                cZ--;
                flag2 = false;
                break;

            case 1: // '\001'
                flag2 = false;
                // fall through

            case 0: // '\0'
                int i2 = ah_int_array1d_static_fld[cZ + 1];
                String s1 = f_java_lang_String_array1d_static_fld[i2];
                i2 = ah_int_array1d_static_fld[cZ];
                String as1[] = a(s1, cR);
                for(int l2 = 0; l2 < as1.length; l2++)
                {
                    b_java_util_Vector_static_fld.addElement(new Integer(i2));
                    b_java_util_Vector_static_fld.addElement(new Integer(a_java_util_Vector_static_fld.size()));
                    b_java_util_Vector_static_fld.addElement(new Integer(0));
                    a_java_util_Vector_static_fld.addElement(as1[l2]);
                }

                int k2 = as1.length;
                i1 += eR * k2;
                break;

            case 2: // '\002'
                if(cY == b_java_util_Vector_static_fld.size())
                {
                    int j2 = ah_int_array1d_static_fld[cZ + 1];
                    a(f_java_lang_String_array1d_static_fld[j2], cR);
                    D(3);
                    l1 = eR;
                    i1 += l1;
                } else
                {
                    flag = true;
                    cZ -= 2;
                }
                flag2 = false;
                break;

            case 7: // '\007'
                b_java_util_Vector_static_fld.addElement(new Integer(7));
                b_java_util_Vector_static_fld.addElement(new Integer(ah_int_array1d_static_fld[cZ + 1]));
                i1 += null.b(ah_int_array1d_static_fld[cZ + 1]);
                flag2 = false;
                break;

            case 9: // '\t'
                cZ--;
                flag2 = false;
                break;

            case 10: // '\n'
                cZ--;
                flag2 = true;
                break;

            case 3: // '\003'
            case 4: // '\004'
            case 5: // '\005'
            case 6: // '\006'
            case 8: // '\b'
            case 11: // '\013'
            case 12: // '\f'
            default:
                b_java_util_Vector_static_fld.addElement(new Integer(ah_int_array1d_static_fld[cZ]));
                b_java_util_Vector_static_fld.addElement(new Integer(ah_int_array1d_static_fld[cZ + 1]));
                break;

            case 13: // '\r'
                break;
            }
            if(flag2)
                b_java_util_Vector_static_fld.addElement(new Integer(10));
        }

        boolean flag4 = l1 > cS;
        boolean flag5 = false;
        cX = cY;
        do
        {
            if(flag5)
                break;
            da = 0;
            cY = cX;
            int j1 = cX;
            int k1 = 0;
            flag5 = flag4;
            do
            {
                if(j1 >= b_java_util_Vector_static_fld.size() || k1 + l1 > cS && cT != 2)
                    break;
                boolean flag3 = false;
                int i3;
                switch(i3 = ((Integer)b_java_util_Vector_static_fld.elementAt(j1)).intValue())
                {
                case 0: // '\0'
                case 1: // '\001'
                    k1 += eR;
                    j1 += 3;
                    break;

                case 13: // '\r'
                    k1 += f(d.d - d.c);
                    // fall through

                case 10: // '\n'
                    j1++;
                    flag3 = true;
                    break;

                case 7: // '\007'
                    k1 += null.b(((Integer)b_java_util_Vector_static_fld.elementAt(j1 + 1)).intValue());
                    // fall through

                case 2: // '\002'
                case 3: // '\003'
                case 4: // '\004'
                case 5: // '\005'
                case 6: // '\006'
                case 8: // '\b'
                case 9: // '\t'
                case 11: // '\013'
                case 12: // '\f'
                default:
                    j1 += 2;
                    break;
                }
                if((flag3 = flag3 || flag4) && cT == 2)
                {
                    da = k1;
                    cY = j1;
                } else
                if(k1 + l1 <= cS && flag3 && cT != 2)
                {
                    da = k1;
                    cY = j1;
                    flag5 = true;
                }
                if(i3 == 10)
                    k1 += eR;
            } while(true);
            if(!flag5)
                flag4 = true;
            if(cT == 2)
                flag5 = true;
        } while(true);
        da += l1;
        cU = 0;
    }

    private static void U()
    {
        f_java_lang_String_array1d_static_fld = null;
        ah_int_array1d_static_fld = null;
        a_java_util_Vector_static_fld = null;
        b_java_util_Vector_static_fld = null;
        cY = 0;
    }

    private static int a(String as1[])
    {
        int i1 = 0;
        for(int j1 = 0; j1 < as1.length; j1++)
            if(a(as1[j1]) > i1)
                i1 = a(as1[j1]);

        return i1;
    }

    private static void a(int i1, int j1, int k1, int l1)
    {
        if(a_boolean_array1d_static_fld[l1])
        {
            J_boolean_static_fld = true;
            _flddo = i1;
            dq = j1;
            dr = k1;
        }
    }

    private static void V()
    {
        J_boolean_static_fld = false;
        _flddo = dh;
    }

    private static void x(int i1)
    {
        a_boolean_array1d_static_fld[i1] = false;
    }

    private static void W()
    {
        l_d_array1d_static_fld = new d[10];
        try
        {
            i_a_static_fld = a(169, ((byte []) (null)), ((byte []) (null)), false, false);
            l_d_array1d_static_fld[0] = d.a(46, 0);
            l_d_array1d_static_fld[1] = d.a(47, 0);
            l_d_array1d_static_fld[2] = d.a(48, 0);
            l_d_array1d_static_fld[3] = d.a(49, 0);
            l_d_array1d_static_fld[4] = d.a(50, 0);
            l_d_array1d_static_fld[5] = d.a(51, 0);
            l_d_array1d_static_fld[6] = d.a(52, 0);
            l_d_array1d_static_fld[7] = d.a(53, 0);
            l_d_array1d_static_fld[8] = d.a(54, 0);
            l_d_array1d_static_fld[9] = d.a(55, 0);
        }
        catch(Exception _ex) { }
        K_boolean_static_fld = true;
    }

    private static void j(int i1, int j1)
    {
        l_d_array1d_static_fld[i1].a(1, i_a_static_fld, j1, 8, 0);
    }

    private static void X()
    {
        if(!K_boolean_static_fld)
            return;
        K_boolean_static_fld = false;
        int i1 = e.a_int_static_fld;
        int j1 = b(1);
        C(0xff000000);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, i1, 16);
        j(5, (i1 * 26) / 1000);
        j(4, (i1 * 65) / 1000);
        j(6, (i1 * 422) / 1000);
        j(4, (i1 * 455) / 1000);
        int k1;
        long l1 = (k1 = ((dt >> 16) * 35) / 600) << 16;
        int j2;
        long l2 = (j2 = ((dv >> 16) * 35) / 600) << 16;
        long l5 = 0L;
        long l3 = 0L;
        l5 = dt;
        l3 = (((long)ds * l1 >> 16) << 16) / l5 >> 16;
        long l4 = 0L;
        l5 = dv;
        if((l4 = (((long)du * l2 >> 16) << 16) / l5 >> 16) <= 0L && du >> 16 > 0)
            l4 = 1L;
        l1 = (i1 * 80) / 1000 + 1;
        int i2 = (i1 * 470) / 1000 + 1;
        C(0x553355);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(l1, 6, k1, 4);
        C(0xff0044);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(l1, 6, (int)l3, 4);
        C(0x553355);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(i2, 6, j2, 4);
        C(48127);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(i2, 6, (int)l4, 4);
        k1 = -1;
        switch(P_int_static_fld)
        {
        case 2: // '\002'
            k1 = 0;
            break;

        case 0: // '\0'
            k1 = 2;
            break;

        case 4: // '\004'
            k1 = 3;
            break;

        case 6: // '\006'
            k1 = 1;
            break;
        }
        if(k1 != -1)
        {
            j(k1, (i1 * 900) / 1000);
            j(7, (i1 * 850) / 1000);
            if((k1 = v_int_array1d_static_fld[P_int_static_fld]) > 0)
                j(k1 != 1 ? 9 : 8, (i1 * 810) / 1000);
        }
        b(j1);
    }

    private static void b(int i1, int j1, int k1, int l1)
    {
        ds = i1;
        dt = j1;
        du = k1;
        dv = l1;
        K_boolean_static_fld = true;
    }

    private static void Y()
    {
        dB = 0;
        dC = 0;
        dD = 4;
        dE = e.a_int_static_fld - 4 - 4;
    }

    private static boolean c(int i1)
    {
        switch(dB)
        {
        default:
            return false;

        case 0: // '\0'
            dB = 1;
            // fall through

        case 2: // '\002'
            dF = i1;
            break;
        }
        dz = dy + i1 + 5 + 2;
        dD = 4;
        dE = e.a_int_static_fld - 4 - 4;
        dC = 0;
        dw = 500;
        dx = 500;
        return true;
    }

    private static boolean a(boolean flag)
    {
        boolean flag1;
        if(flag1 = dB == 2 || flag)
        {
            dB = flag ? 0 : 3;
            dC = 0;
        }
        return flag1;
    }

    private static void y(int i1)
    {
        dA = (dy = i1) + 4;
        dz = dy + dF + 5 + 2;
        dD = 4;
        dE = e.a_int_static_fld - 4 - 4;
    }

    private static void c(boolean flag)
    {
        int i1 = 0;
        if(flag)
            i1 = 100;
        else
            switch(dB)
            {
            case 0: // '\0'
                return;

            case 2: // '\002'
                i1 = 100;
                break;

            case 1: // '\001'
                i1 = (dC * 100) / dw;
                break;

            case 3: // '\003'
                i1 = 100 - (dC * 100) / dx;
                break;
            }
        flag = dy + (i1 * (dz - dy)) / 100;
        e.d(0x80221155);
        e.a(dy, e.a_int_static_fld, flag - dy);
        C(0xffdd55);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, dy, e.a_int_static_fld, 1);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, flag, e.a_int_static_fld, 1);
        C(0x221133);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, dy + 1, e.a_int_static_fld, 1);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, flag + 1, e.a_int_static_fld, 1);
    }

    private static boolean d()
    {
        boolean flag;
        if(flag = a(false))
        {
            e.a();
            U();
            M_boolean_static_fld = false;
        }
        return flag;
    }

    private static void d(boolean flag)
    {
        int i1 = cH;
        n_int_array1d_static_fld = new int[b_int_array2d_static_fld.length];
        if(!flag && !r_boolean_static_fld)
        {
            if(w_boolean_static_fld)
                au_int_static_fld = 6;
            try
            {
                byte abyte0[];
                if((abyte0 = e.a("g", 0)) == null)
                    throw new IOException();
                DataInputStream datainputstream;
                int j1 = (datainputstream = new DataInputStream(new ByteArrayInputStream(abyte0))).readInt();
                if(!w_boolean_static_fld)
                    au_int_static_fld = j1;
                r_boolean_static_fld = datainputstream.readBoolean();
                q_boolean_static_fld = au_int_static_fld != -1;
                j1 = datainputstream.readInt();
                for(int k1 = 0; k1 != a_boolean_array1d_static_fld.length; k1++)
                    a_boolean_array1d_static_fld[k1] = (j1 & 1 << k1) != 0;

                as_int_static_fld = datainputstream.readInt();
                at_int_static_fld = datainputstream.readInt();
            }
            catch(Exception _ex)
            {
                z();
            }
        }
        String as1[] = null;
        if(a(0) > 0)
            as1 = a();
        b(0);
        boolean flag1 = q_boolean_static_fld && !r_boolean_static_fld;
        String as2[] = {
            flag1 ? c(21) : "", c(7), au_int_static_fld == -1 ? "" : c(58), "", "", "", c(8), c(9), c(47)
        };
        int ai1[] = {
            flag1 ? 0 : 2, 0, au_int_static_fld == -1 ? 2 : 0, 2, 2, 2, 0, 0, 0
        };
        if(!aa_boolean_static_fld && !Z_boolean_static_fld)
        {
            if(h_java_lang_String_array1d_static_fld == null)
                av();
            for(int l1 = 0; l1 < eg; l1++)
                if(a_java_lang_String_static_fld.equals(h_java_lang_String_array1d_static_fld[l1]))
                    ef = l1;

            as2[6] = b(2);
            N_boolean_static_fld = true;
        }
        if(as1 != null)
        {
            for(int i2 = 0; i2 < as1.length; i2++)
            {
                as2[i2 + 3] = as1[i2];
                ai1[i2 + 3] = i2 != 0 ? 0 : 4;
            }

        }
        if(!flag)
            dG = flag1 ? 0 : 1;
        else
            dG = i1;
        a(((String) (null)), as2, ai1, dG, 0, aH, 2, 2, 0);
        b(true);
        a(cI, false, true);
        cN = dA;
        e.c();
        e.a();
        e.c(0);
        e.c(4);
        if(O_boolean_static_fld && o_boolean_static_fld)
        {
            m(0);
            e(0, 1);
        }
        flag = 171;
        i1 = 57;
        if(a_java_lang_String_static_fld.startsWith("Espa"))
        {
            flag = 172;
            i1 = 58;
        }
        try
        {
            e.a("/b.mbf");
            j_a_static_fld = a(170, ((byte []) (null)), ((byte []) (null)), false, false);
            k_a_static_fld = a(flag, ((byte []) (null)), ((byte []) (null)), false, false);
            b_d_static_fld = d.a(56, 1);
            c_d_static_fld = d.a(i1, 1);
            e.e();
            return;
        }
        catch(Exception _ex)
        {
            return;
        }
    }

    private static void Z()
    {
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                d_int_static_fld = 24;
                return;
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
            {
                switch(j_int_static_fld)
                {
                case 11: // '\013'
                    k_int_static_fld = 4;
                    return;

                case 19: // '\023'
                    k_int_static_fld = 3;
                    break;
                }
                return;
            }
        } else
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
                T();
            c(da, true);
        }
    }

    private static void aa()
    {
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                d_int_static_fld = 28;
                return;
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
            {
                switch(j_int_static_fld)
                {
                case 12: // '\f'
                    k_int_static_fld = 4;
                    return;

                case 20: // '\024'
                    k_int_static_fld = 3;
                    break;
                }
                return;
            }
        } else
        if((e.d & 0x20040) != 0 || e.c == 0)
            T();
    }

    private static void ab()
    {
        if((dI = a()) != -1 || e.c == 0)
        {
            z(dI);
            if(!a())
            {
                dR = 2;
                dS = 3;
                d_int_static_fld = 4;
                return;
            }
            if(a(1) > 0)
                d_int_static_fld = 10;
            else
            if(!Z_boolean_static_fld && !aa_boolean_static_fld)
                d_int_static_fld = 28;
            else
                d_int_static_fld = 3;
            O();
        }
        if((e.d & 0x100000) != 0)
            d_int_static_fld = 24;
    }

    private static void ac()
    {
        b(0);
        String s1 = b.a_b_static_fld.getAppProperty("MIDlet-Version");
        String s2 = b.a_b_static_fld.getAppProperty("MIDlet-Vendor");
        String as1[] = new String[0];
        int ai1[] = new int[0];
        switch(dJ)
        {
        default:
            break;

        case 0: // '\0'
            if(s1 == null || s2 == null)
                as1 = c(30);
            else
                as1 = c(30) + " " + s1 + '\n';
            as1 = (new String[] {
                c(47), as1, ""
            });
            ai1 = (new int[] {
                1, 0, 0, 2, 0, 1
            });
            break;

        case 1: // '\001'
            as1 = (new String[] {
                c(31), c(32)
            });
            ai1 = (new int[] {
                0, 0, 0, 1
            });
            break;

        case 2: // '\002'
            as1 = (new String[] {
                c(47), c(33), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 3: // '\003'
            as1 = (new String[] {
                c(47), c(34), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 4: // '\004'
            as1 = (new String[] {
                c(47), c(36)
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 5: // '\005'
            as1 = (new String[] {
                c(47), c(37), c(38), c(39), ""
            });
            ai1 = (new int[] {
                0, 1, 0, 2, 0, 3
            });
            break;
        }
        a(as1, ai1, ((a) (null)), 0, 0, aH, aI - b_a_static_fld.b(0), 17, true);
        P_boolean_static_fld = false;
        b(true);
        c(da, true);
    }

    private static void ad()
    {
        b(0);
        s();
        dK = 0;
        Q_boolean_static_fld = false;
        e.c(3);
        e.c(4);
        if(S_boolean_static_fld)
            ah();
        else
        if(T_boolean_static_fld || U_boolean_static_fld)
            ai();
        else
            ag();
        b(!(R_boolean_static_fld = c_int_static_fld == 6));
        c(da, true);
        if(R_boolean_static_fld)
            e.a(false);
    }

    private static void ae()
    {
        byte byte0 = ((byte)(S_boolean_static_fld ? 6 : 7));
        if(T_boolean_static_fld || U_boolean_static_fld)
            byte0 = 2;
        if(!Q_boolean_static_fld && !c() && dK == byte0 - 1)
        {
            e.a();
            e.c(0);
            Q_boolean_static_fld = true;
        }
        if(e.c == 3 || e.c == 0 || (e.d & 0x20040) != 0)
        {
            if(!c())
            {
                if(++dK == byte0)
                {
                    if(R_boolean_static_fld)
                        af();
                    else
                        r_int_static_fld = 1;
                } else
                {
                    if(S_boolean_static_fld)
                        ah();
                    else
                    if(T_boolean_static_fld || U_boolean_static_fld)
                        ai();
                    else
                        ag();
                    c(da, true);
                }
            } else
            {
                T();
            }
            s();
        }
        if(e.c == 4 || (e.d & 0x100000) != 0)
        {
            if(R_boolean_static_fld)
            {
                af();
                return;
            }
            r_int_static_fld = 1;
        }
    }

    private static void af()
    {
        if(S_boolean_static_fld || T_boolean_static_fld)
        {
            a(false);
            k_int_static_fld = dN;
        } else
        {
            k_int_static_fld = 4;
        }
        if(o_boolean_static_fld)
            al();
    }

    private static void ag()
    {
        String as1[] = null;
        int ai1[] = null;
        switch(dK)
        {
        case 0: // '\0'
            as1 = (new String[] {
                c(9), c(40), ""
            });
            ai1 = (new int[] {
                1, 0, 0, 2, 0, 1
            });
            break;

        case 1: // '\001'
            as1 = (new String[] {
                c(9), c(41), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 2: // '\002'
            as1 = (new String[] {
                c(9), c(43), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 3: // '\003'
            as1 = (new String[] {
                c(9), c(76), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 4: // '\004'
            as1 = (new String[] {
                c(9), c(42), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 5: // '\005'
            as1 = (new String[] {
                c(9), c(44), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;

        case 6: // '\006'
            as1 = (new String[] {
                c(9), c(45), ""
            });
            ai1 = (new int[] {
                0, 1
            });
            break;
        }
        a(as1, ai1, ((a) (null)), 1, 0, aH - 2, aI - b_a_static_fld.b(0), 17, true);
    }

    private static void ah()
    {
        String as1[] = null;
        int ai1[] = null;
        switch(dK)
        {
        case 0: // '\0'
            as1 = (new String[] {
                c(9), c(40), ""
            });
            break;

        case 1: // '\001'
            as1 = (new String[] {
                c(41)
            });
            break;

        case 2: // '\002'
            as1 = (new String[] {
                c(43)
            });
            break;

        case 3: // '\003'
            as1 = (new String[] {
                c(76)
            });
            break;

        case 4: // '\004'
            as1 = (new String[] {
                c(42)
            });
            break;

        case 5: // '\005'
            as1 = (new String[] {
                c(45)
            });
            break;
        }
        if(dK == 0)
            ai1 = (new int[] {
                1, 0, 0, 2, 0, 1
            });
        else
            ai1 = (new int[] {
                0, 0
            });
        a(as1, ai1, ((a) (null)), 1, 0, aH - 2, aI - b_a_static_fld.b(0), 17, true);
    }

    private static void ai()
    {
        String as1[] = null;
        int ai1[] = null;
        switch(dK)
        {
        case 0: // '\0'
            as1 = (new String[] {
                c(9), c(61), ""
            });
            break;

        case 1: // '\001'
            as1 = (new String[] {
                c(9), c(62), ""
            });
            break;
        }
        if(dK == 0)
            ai1 = (new int[] {
                1, 0, 0, 2, 0, 1
            });
        else
            ai1 = (new int[] {
                0, 1
            });
        a(as1, ai1, ((a) (null)), 1, 0, aH - 2, aI - b_a_static_fld.b(0), 17, true);
    }

    private static void aj()
    {
        O();
        U();
        S_boolean_static_fld = false;
        T_boolean_static_fld = false;
        U_boolean_static_fld = false;
        s();
    }

    private static void ak()
    {
        dM = -1;
        boolean flag = aa_boolean_static_fld && Z_boolean_static_fld;
        String as1[] = {
            c(16), c(8), b(0), b(1), c(9), c(17), c(11)
        };
        int ai1[] = {
            0, flag ? 0 : 2, flag || !Z_boolean_static_fld ? 2 : 0, flag || !aa_boolean_static_fld ? 2 : 0, 0, 0, 0
        };
        a(((String) (null)), as1, ai1, dL, 0, aH, 2, 2, 0);
        y(e.b / 2 - cI / 2);
        cN = dA;
        c(cI);
    }

    private static void al()
    {
        e.a(o_boolean_static_fld);
        if(o_boolean_static_fld)
            o(dZ);
    }

    private static void am()
    {
        if(dB == 2)
            e.c(0);
        else
            return;
        if(dP == -1)
        {
            if((dO = a()) != -1)
                dP = dO;
            if(e.c == 0)
                dP = cH;
        }
        switch(dP)
        {
        case 0: // '\0'
            dB = 0;
            if(dQ != 8)
                p();
            else
                F(10);
            k_int_static_fld = dQ;
            if(o_boolean_static_fld)
            {
                x();
                n(dZ);
                o(dZ);
                return;
            }
            break;

        case 1: // '\001'
            k_int_static_fld = 20;
            return;

        case 2: // '\002'
            k_int_static_fld = 19;
            break;
        }
    }

    private static void an()
    {
        String as1[] = {
            c(19), c(20)
        };
        int ai1[] = {
            2, 0, 0, 1
        };
        a(as1, ai1, ((a) (null)), 0, 0, aH, aI - b_a_static_fld.b(0), 3, true);
        e.c(0);
        e.c(4);
    }

    private static void ao()
    {
        if(!c())
        {
            if((e.d & 0x20040) != 0 || e.c == 0)
            {
                d_int_static_fld = 24;
                return;
            }
            if(e.c == 4 || (e.d & 0x100000) != 0)
            {
                switch(dR)
                {
                case 0: // '\0'
                    k_int_static_fld = dS;
                    return;

                case 1: // '\001'
                    r_int_static_fld = dS;
                    return;

                case 2: // '\002'
                    d_int_static_fld = dS;
                    break;
                }
                return;
            }
        } else
        if((e.d & 0x20040) != 0 || e.c == 0)
            T();
    }

    private static void ap()
    {
        p(0xff000000);
        S();
    }

    private static void aq()
    {
        int i1 = e.a_int_static_fld;
        int j1;
        dT = ((j1 = e.b) * 10) / 100;
        dU = (j1 * 90) / 100;
        dV = (i1 * 10) / 100;
        dW = (i1 * 90) / 100;
        e.a(false);
        String s1 = null;
        int ai1[] = null;
        s1 = "";
        switch(dX)
        {
        case 0: // '\0'
            s1 = c(59);
            break;

        case 1: // '\001'
            s1 = c(68);
            break;

        case 2: // '\002'
            s1 = c(65);
            break;

        case 3: // '\003'
            s1 = c(66);
            break;

        case 4: // '\004'
            s1 = c(67);
            break;
        }
        String as1[] = {
            s1
        };
        ai1 = (new int[] {
            0, 0
        });
        H_boolean_static_fld = false;
        a(as1, ai1, ((a) (null)), dV, dT, dW - dV, dU - dT, 20, H_boolean_static_fld);
        V_boolean_static_fld = c();
        e.a();
        if(dX == 0)
            e.c(1);
        e.c(3);
    }

    private static void ar()
    {
        V_boolean_static_fld = c();
        if(dX == 0 && e.c == 1)
            r_int_static_fld = 1;
        if(e.c == 3 || (e.d & 0x20040) != 0)
        {
            if(!H_boolean_static_fld)
            {
                H_boolean_static_fld = true;
                return;
            }
            if(V_boolean_static_fld)
            {
                H_boolean_static_fld = false;
                T();
                return;
            }
            switch(dX)
            {
            case 0: // '\0'
                b(0);
                return;

            case 1: // '\001'
                d_int_static_fld = 28;
                f(5);
                return;

            case 2: // '\002'
                b(2);
                return;

            case 3: // '\003'
                b(3);
                return;

            case 4: // '\004'
                b(5);
                break;
            }
        }
    }

    private static void as()
    {
        p(0xff000000);
        S();
    }

    private static void at()
    {
        boolean flag = false;
        if((e.d & 0x100000) != 0 && dZ == 0)
        {
            d_int_static_fld = 28;
            return;
        }
        if(g_java_lang_String_array1d_static_fld[dZ] == null)
        {
            aI();
            return;
        }
        X_boolean_static_fld = true;
        dY;
        JVM INSTR tableswitch 0 25: default 1554
    //                   0 164
    //                   1 365
    //                   2 368
    //                   3 371
    //                   4 473
    //                   5 491
    //                   6 635
    //                   7 712
    //                   8 715
    //                   9 804
    //                   10 874
    //                   11 912
    //                   12 1170
    //                   13 1180
    //                   14 1190
    //                   15 1200
    //                   16 1210
    //                   17 1220
    //                   18 1230
    //                   19 1241
    //                   20 1252
    //                   21 1258
    //                   22 1360
    //                   23 1366
    //                   24 1507
    //                   25 1522;
           goto _L1 _L2 _L3 _L3 _L4 _L5 _L6 _L7 _L3 _L8 _L9 _L10 _L11 _L12 _L13 _L14 _L15 _L16 _L17 _L18 _L19 _L20 _L21 _L22 _L23 _L24 _L25
_L3:
        break; /* Loop/switch isn't completed */
_L2:
        a_java_io_DataInputStream_static_fld.skipBytes(6);
        j_boolean_static_fld = true;
        (a_d_array1d_static_fld = new d[14])[0] = d.a(71, 1);
        a_d_array1d_static_fld[1] = a_d_static_fld;
        a_d_array1d_static_fld[2] = d.a(63, 0);
        a_d_array1d_static_fld[3] = d.a(68, 0);
        a_d_array1d_static_fld[4] = d.a(65, 0);
        a_d_array1d_static_fld[5] = d.a(64, 1);
        a_d_array1d_static_fld[6] = d.a(60, 0);
        a_d_array1d_static_fld[7] = d.a(59, 0);
        a_d_array1d_static_fld[8] = d.a(67, 0);
        a_d_array1d_static_fld[9] = d.a(62, 0);
        a_d_array1d_static_fld[10] = d.a(61, 0);
        a_d_array1d_static_fld[11] = d.a(69, 0);
        a_d_array1d_static_fld[12] = d.a(70, 0);
        a_d_array1d_static_fld[13] = d.a(66, 0);
        z_int_static_fld = 1;
        k_boolean_static_fld = true;
        h_boolean_static_fld = false;
        i_int_static_fld = 57;
        Y();
        break; /* Loop/switch isn't completed */
_L4:
        J_boolean_static_fld = false;
        _flddo = dh;
        dp = 1;
        k_d_array1d_static_fld = new d[ai_int_array1d_static_fld.length];
        try
        {
            for(int i1 = 0; i1 != ai_int_array1d_static_fld.length; i1++)
                k_d_array1d_static_fld[i1] = d.a(ai_int_array1d_static_fld[i1], 1);

            h_a_static_fld = a(180, ((byte []) (null)), ((byte []) (null)), false, false);
        }
        catch(Exception _ex) { }
        aE_int_array1d_static_fld = new int[330];
        gB = 0;
        ai_boolean_static_fld = false;
        aj_boolean_static_fld = false;
        ak_boolean_static_fld = false;
        al_boolean_static_fld = false;
        break; /* Loop/switch isn't completed */
_L5:
        W();
        L_int_array1d_static_fld = new int[128];
        bT = -1;
        break; /* Loop/switch isn't completed */
_L6:
        int j1;
        f_d_array1d_static_fld = new d[j1 = E_int_array1d_static_fld.length / 3];
        for(int k2 = 0; k2 != j1; k2++)
        {
            int j3 = D_int_array1d_static_fld[E_int_array1d_static_fld[k2 * 3]];
            int j4 = E_int_array1d_static_fld[k2 * 3 + 2];
            f_d_array1d_static_fld[k2] = d.a(j3, j4);
        }

        C_int_array1d_static_fld = new int[90];
        bu = 0;
        B_int_array1d_static_fld = new int[1870];
        bs = 0;
        e_d_array1d_static_fld = new d[j1 = A_int_array1d_static_fld.length / 3];
        for(int l2 = 0; l2 != j1; l2++)
        {
            int k3 = l2 * 3;
            int k4 = z_int_array1d_static_fld[A_int_array1d_static_fld[k3]];
            k3 = A_int_array1d_static_fld[k3 + 2];
            e_d_array1d_static_fld[l2] = d.a(k4, k3);
        }

        break; /* Loop/switch isn't completed */
_L7:
        bC = 0;
        J_int_array1d_static_fld = new int[60];
        int k1;
        i_d_array1d_static_fld = new d[k1 = K_int_array1d_static_fld.length / 2];
        for(int i3 = 0; i3 != k1; i3++)
        {
            int l3 = K_int_array1d_static_fld[i3 << 1];
            int l4 = K_int_array1d_static_fld[(i3 << 1) + 1];
            i_d_array1d_static_fld[i3] = d.a(l3, l4);
        }

        y_boolean_static_fld = x_boolean_static_fld = false;
        break; /* Loop/switch isn't completed */
_L8:
        G_int_array1d_static_fld = new int[150];
        bw = 0;
        (g_d_array1d_static_fld = new d[11])[0] = d.a(31, 1);
        g_d_array1d_static_fld[1] = d.a(29, 1);
        g_d_array1d_static_fld[2] = d.a(30, 1);
        g_d_array1d_static_fld[3] = d.a(32, 1);
        g_d_array1d_static_fld[4] = d.a(33, 1);
        f_a_static_fld = a(158, ((byte []) (null)), ((byte []) (null)), false, false);
        break; /* Loop/switch isn't completed */
_L9:
        I_int_array1d_static_fld = new int[60];
        bx = 0;
        h_d_array1d_static_fld = new d[H_int_array1d_static_fld.length];
        for(int l1 = 0; l1 != H_int_array1d_static_fld.length / 2; l1++)
            h_d_array1d_static_fld[l1] = d.a(H_int_array1d_static_fld[l1 << 1], H_int_array1d_static_fld[(l1 << 1) + 1]);

        by = -1;
        break; /* Loop/switch isn't completed */
_L10:
        int i2 = ea;
        n_boolean_static_fld = true;
        b_javax_microedition_lcdui_Image_static_fld = e.a(c_java_lang_String_array1d_static_fld[i2]);
        ao_int_static_fld = e_int_array1d_static_fld[i2];
        ap_int_static_fld = f_int_array1d_static_fld[i2];
        break; /* Loop/switch isn't completed */
_L11:
        dZ;
        JVM INSTR lookupswitch 1: default 1167
    //                   6: 932;
           goto _L26 _L27
_L26:
        break; /* Loop/switch isn't completed */
_L27:
        cd += b_int_static_fld;
        bV = 1;
        T_int_array1d_static_fld = M_int_array1d_static_fld;
        cf = 6;
        U_int_array1d_static_fld = O_int_array1d_static_fld;
        ce = 5;
        Z_int_array1d_static_fld = P_int_array1d_static_fld;
        X_int_array1d_static_fld = Q_int_array1d_static_fld;
        Y_int_array1d_static_fld = R_int_array1d_static_fld;
        aa_int_array1d_static_fld = N_int_array1d_static_fld;
        ca = 5;
        cb = 0x190000;
        cc = bU;
          goto _L28
        Object obj = null;
        printStackTrace();
_L28:
        try
        {
            g_a_static_fld = a(cc, ((byte []) (null)), ((byte []) (null)), false, true);
            V_int_array1d_static_fld = new int[cg = cf << 1];
            W_int_array1d_static_fld = new int[cg];
            ab_int_array1d_static_fld = new int[cg];
            ac_int_array1d_static_fld = new int[cg];
            cx = ca;
            cy = 0x280000;
            S_int_array1d_static_fld = new int[(j_d_array1d_static_fld = new d[T_int_array1d_static_fld.length / 3]).length];
            for(int i4 = 0; i4 != j_d_array1d_static_fld.length; i4++)
            {
                j_d_array1d_static_fld[i4] = d.a(T_int_array1d_static_fld[i4 * 3], T_int_array1d_static_fld[i4 * 3 + 1]);
                S_int_array1d_static_fld[i4] = 1;
            }

            n_boolean_static_fld = false;
            A_boolean_static_fld = true;
            B_boolean_static_fld = true;
            s(1);
            v_int_array1d_static_fld[0] = 1;
        }
        catch(Exception _ex) { }
        break; /* Loop/switch isn't completed */
_L12:
        a(a_java_io_DataInputStream_static_fld, 0);
        break; /* Loop/switch isn't completed */
_L13:
        a(a_java_io_DataInputStream_static_fld, 1);
        break; /* Loop/switch isn't completed */
_L14:
        a(a_java_io_DataInputStream_static_fld, 2);
        break; /* Loop/switch isn't completed */
_L15:
        a(a_java_io_DataInputStream_static_fld, 3);
        break; /* Loop/switch isn't completed */
_L16:
        a(a_java_io_DataInputStream_static_fld, 4);
        break; /* Loop/switch isn't completed */
_L17:
        a(a_java_io_DataInputStream_static_fld, 5);
        break; /* Loop/switch isn't completed */
_L18:
        a(a_java_io_DataInputStream_static_fld, 6);
        break; /* Loop/switch isn't completed */
_L19:
        a(a_java_io_DataInputStream_static_fld, 7);
        break; /* Loop/switch isn't completed */
_L20:
        p();
        break; /* Loop/switch isn't completed */
_L21:
        br = 0;
        (b_a_array1d_static_fld = new a[1])[0] = a(175, ((byte []) (null)), ((byte []) (null)), false, true);
        w_int_array1d_static_fld = new int[80];
        bk = 0;
        (d_d_array1d_static_fld = new d[16])[0] = d.a(76, 1);
        d_d_array1d_static_fld[8] = d.a(77, 1);
        d_d_array1d_static_fld[4] = d.a(74, 1);
        d_d_array1d_static_fld[12] = d.a(75, 1);
        d_d_array1d_static_fld[9] = d.a(78, 1);
        break; /* Loop/switch isn't completed */
_L22:
        F();
        break; /* Loop/switch isn't completed */
_L23:
        int j2 = dZ;
        v_int_array1d_static_fld[0] = 0;
        v_int_array1d_static_fld[2] = 0;
        v_int_array1d_static_fld[4] = 0;
        v_int_array1d_static_fld[6] = 0;
        switch(j2)
        {
        case 0: // '\0'
            v_int_array1d_static_fld[0] = 1;
            P_int_static_fld = 0;
            break;

        case 2: // '\002'
            v_int_array1d_static_fld[6] = 1;
            P_int_static_fld = 6;
            break;

        case 3: // '\003'
            v_int_array1d_static_fld[2] = 1;
            P_int_static_fld = 2;
            break;

        case 5: // '\005'
            v_int_array1d_static_fld[4] = 1;
            P_int_static_fld = 4;
            break;

        case 6: // '\006'
            v_int_array1d_static_fld[4] = 2;
            P_int_static_fld = 4;
            break;
        }
        break; /* Loop/switch isn't completed */
_L24:
        n(dZ);
        o(dZ);
        break; /* Loop/switch isn't completed */
_L25:
        d_int_static_fld = 6;
        j_int_static_fld = 1;
        k_int_static_fld = 0;
        l_int_static_fld = 0;
        m_int_static_fld = 0;
        n_int_static_fld = 0;
        c_boolean_static_fld = false;
        break; /* Loop/switch isn't completed */
_L1:
        X_boolean_static_fld = false;
        break; /* Loop/switch isn't completed */
        JVM INSTR pop ;
        dY++;
        eb = 0;
        if(X_boolean_static_fld)
            eb += 2;
        L_int_static_fld = a_d_static_fld.a(L_int_static_fld, b_int_static_fld);
        return;
    }

    private static String a(int i1)
    {
        switch(i1)
        {
        case 0: // '\0'
            return c(69);

        case 2: // '\002'
            return c(70);

        case 3: // '\003'
            return c(71);

        case 5: // '\005'
            return c(72);

        case 6: // '\006'
            return c(73);

        case 1: // '\001'
            return c(74);

        case 4: // '\004'
            return c(75);
        }
        return null;
    }

    private static void au()
    {
        if((e.d & 0x100000) != 0)
        {
            boolean flag = false;
            d_int_static_fld = 24;
            return;
        }
        if((ec += b_int_static_fld) > 2000)
        {
            if(Y_boolean_static_fld)
            {
                if(a_java_lang_String_static_fld.equals(""))
                {
                    boolean flag1 = false;
                    d_int_static_fld = 2;
                    return;
                }
                if(a(1) > 0)
                {
                    boolean flag2 = false;
                    d_int_static_fld = 10;
                    return;
                }
                if(!Z_boolean_static_fld && !aa_boolean_static_fld)
                {
                    boolean flag3 = false;
                    d_int_static_fld = 28;
                    return;
                } else
                {
                    boolean flag4 = false;
                    d_int_static_fld = 3;
                    return;
                }
            }
            ec = 0;
            String s1 = (new StringBuffer(8)).append('d').append(ed).append(".png").toString();
            try
            {
                c_javax_microedition_lcdui_Image_static_fld = e.a(s1);
                ed++;
            }
            catch(Exception _ex)
            {
                try
                {
                    c_javax_microedition_lcdui_Image_static_fld = e.a("tmt.png");
                    ee = 0xff000000;
                    Y_boolean_static_fld = true;
                }
                catch(Exception _ex2) { }
            }
            if(!Y_boolean_static_fld)
                try
                {
                    ee = e.b(s1);
                    return;
                }
                catch(Exception _ex) { }
        }
    }

    private static void av()
    {
        try
        {
            aw();
            ef = 0;
            if(a_java_lang_String_static_fld != "")
            {
                for(int i1 = 0; i1 != i_java_lang_String_array1d_static_fld.length; i1++)
                    if(a_java_lang_String_static_fld.equals(i_java_lang_String_array1d_static_fld[i1]))
                    {
                        ef = i1;
                        a(h_java_lang_String_array1d_static_fld[i1]);
                    }

            }
            return;
        }
        catch(Exception _ex)
        {
            return;
        }
    }

    private static void aw()
    {
        DataInputStream datainputstream;
        h_java_lang_String_array1d_static_fld = new String[eg = (datainputstream = e.a("TRAD.lang")).readUnsignedByte()];
        i_java_lang_String_array1d_static_fld = new String[eg];
        for(int i1 = 0; i1 < eg; i1++)
        {
            i_java_lang_String_array1d_static_fld[i1] = datainputstream.readUTF();
            datainputstream.readUnsignedByte();
            h_java_lang_String_array1d_static_fld[i1] = datainputstream.readUTF();
        }

        datainputstream.close();
    }

    private static void z(int i1)
    {
        a_java_lang_String_static_fld = i_java_lang_String_array1d_static_fld[i1];
        String s1 = h_java_lang_String_array1d_static_fld[i1];
        ef = i1;
        try
        {
            if(b_java_io_DataInputStream_static_fld != null)
            {
                b_java_io_DataInputStream_static_fld.close();
                b_java_io_DataInputStream_static_fld = null;
            }
            a(s1);
        }
        catch(Exception _ex) { }
        B();
    }

    private static void ax()
    {
        String s1 = "";
        if(a_java_lang_String_static_fld == "")
        {
            av();
            s1 = h_java_lang_String_array1d_static_fld[0];
            byte abyte0[] = {
                0
            };
            (new String[1])[0] = "OK";
            e.a(abyte0);
        } else
        {
            aw();
            for(int i1 = 0; i1 != eg; i1++)
                if(i_java_lang_String_array1d_static_fld[i1].equals(a_java_lang_String_static_fld))
                    s1 = h_java_lang_String_array1d_static_fld[i1];

        }
        try
        {
            a(s1);
            return;
        }
        catch(IOException _ex)
        {
            b.a_boolean_static_fld = true;
        }
    }

    private static void A(int i1)
    {
        if((ei = i1) == 1)
        {
            if(h_java_lang_String_array1d_static_fld == null)
                av();
            for(i1 = 0; i1 < eg; i1++)
                if(a_java_lang_String_static_fld.equals(i_java_lang_String_array1d_static_fld[i1]))
                    ef = i1;

        }
        b(0);
        B(0);
        if(ei == 0)
            e.a();
        if(ei == 1)
            e.c(1);
        e.c(0);
    }

    private static void ay()
    {
        int i1 = a();
        if(ei == 0 && (e.d & 0x100000) != 0)
            d_int_static_fld = 25;
        if(eh != cH && c_int_static_fld != 3)
        {
            e.a();
            e.c(1);
            I_boolean_static_fld = true;
        }
        if(e.c == 0)
        {
            i1 = -1;
            switch(ei)
            {
            case 0: // '\0'
                d_int_static_fld = 28;
                break;
            }
        }
        if(e.c == 1)
        {
            switch(ei)
            {
            case 2: // '\002'
                k_int_static_fld = 4;
                break;

            case 1: // '\001'
                r_int_static_fld = 1;
                break;
            }
            if(ei == 1)
                O();
        }
        switch(i1)
        {
        default:
            break;

        case 0: // '\0'
            e(true);
            B(0);
            if(!a())
            {
                aB();
                return;
            }
            break;

        case 1: // '\001'
            az();
            B(1);
            if(!a())
            {
                aB();
                return;
            }
            break;

        case 2: // '\002'
            if((e.d & 0x2020) != 0)
            {
                if(--ef < 0)
                    ef = eg - 1;
                a_java_lang_String_static_fld = h_java_lang_String_array1d_static_fld[ef];
                z(ef);
                if(!a())
                {
                    aB();
                    return;
                }
            } else
            {
                if(++ef >= eg)
                    ef = 0;
                a_java_lang_String_static_fld = h_java_lang_String_array1d_static_fld[ef];
                z(ef);
                if(!a())
                {
                    aB();
                    return;
                }
            }
            B();
            B(2);
            e.a();
            e.c(1);
            break;
        }
        eh = cH;
    }

    private static void az()
    {
        aD();
        if(p_boolean_static_fld = !p_boolean_static_fld)
            aC();
        e.b(p_boolean_static_fld);
    }

    private static void e(boolean flag)
    {
        O_boolean_static_fld = o_boolean_static_fld = !o_boolean_static_fld;
        if(flag)
            e.a(o_boolean_static_fld);
        if(o_boolean_static_fld)
            switch(ei)
            {
            case 1: // '\001'
                m(0);
                e(0, 1);
                return;

            case 2: // '\002'
                n(dZ);
                break;
            }
    }

    private static void aA()
    {
        if(ei == 0)
        {
            p(0xff000000);
            cN = dA;
            N();
        } else
        if(ei == 1)
            N();
        if(j_int_static_fld == 16)
        {
            if(dB == 2)
            {
                b(0);
                if(I_boolean_static_fld)
                {
                    I_boolean_static_fld = false;
                    b(0);
                }
                Q();
                return;
            }
        } else
        {
            P();
        }
    }

    private static String b(int i1)
    {
        switch(i1)
        {
        case 0: // '\0'
            return c(12) + ' ' + (o_boolean_static_fld ? c(13) : c(14));

        case 1: // '\001'
            return c(46) + ' ' + (p_boolean_static_fld ? c(13) : c(14));

        case 2: // '\002'
            return i_java_lang_String_array1d_static_fld[ef];
        }
        return "";
    }

    private static void B(int i1)
    {
        String s1 = null;
        R();
        String as1[] = {
            b(0), b(1), b(2)
        };
        int ai1[] = {
            0, 0, 0
        };
        if(!Z_boolean_static_fld)
        {
            ai1[0] = 2;
            if(i1 == 0)
                i1++;
        }
        if(!aa_boolean_static_fld)
        {
            ai1[1] = 2;
            if(i1 == 1)
                i1++;
        }
        if(c_int_static_fld != 3)
            s1 = c(8);
        if(ei != 1 || eg == 1)
        {
            ai1[2] = 2;
            as1[2] = "";
        }
        a(s1, as1, ai1, i1, 0, aH, 2, 2, 0);
        eh = -1;
        if(ei == 0)
        {
            ai1[2] = 2;
            as1[2] = "";
            b(false);
            a(cI, true, true);
            cN = dA;
        }
        if(ei == 1)
        {
            b(true);
            a(cI, true, true);
            cN = dA;
        }
        if(ei == 2)
        {
            b(true);
            a(cI, true, false);
            cN = dA;
        }
    }

    private static void aB()
    {
        if(ei == 1)
        {
            dR = 1;
            dS = 1;
            r_int_static_fld = 7;
            return;
        }
        if(ei == 0)
        {
            dR = 2;
            dS = 28;
            d_int_static_fld = 4;
        }
    }

    private static void a(int i1, int j1, int k1, int l1, int i2, int j2, boolean flag)
    {
        i1 = flag ? i1 - l1 : i1 + k1;
        k1 = l1 - k1;
        l1 = j2 - i2;
        j1 += i2;
        et = (er = i1) + k1;
        eu = (es = j1) + l1;
    }

    private static int b(int i1, int j1)
    {
        int k1 = 0;
        if(j1 < 0)
            j1 = 0;
        else
        if(j1 >= el)
            j1 = el - 1;
        if(i1 >= 0 && i1 < ek)
            k1 = c_byte_array1d_static_fld[j1 * ek + i1] & 0xff;
        else
            k1 = 1;
        return k1;
    }

    private static int d(int i1)
    {
        if(i1 >= 0)
            return i1 / 16;
        else
            return -((-i1 - 1) / 16 + 1);
    }

    private static int e(int i1)
    {
        if(i1 >= 0 && i1 < ej)
            return i1 / 16;
        if(i1 < 0)
            return 0;
        else
            return (ej - 1) / 16;
    }

    private static int a(int i1, int j1, int k1, int l1, int i2)
    {
        int j2 = e(i1);
        j1 = d(j1);
        k1 = d(k1) - j1;
        int k2 = 0;
        int l2 = j2 * ek;
        for(; k1 >= 0; k1--)
        {
            if(j1 >= 0 && j1 < ek)
                k2 |= c_byte_array1d_static_fld[l2 + j1];
            else
                k2 |= 1;
            j1++;
        }

        if((k2 &= i2) != 0 && l1 != 0)
            if(l1 > 0)
                em = (j2 << 4) - 1 - i1;
            else
                em = (j2 + 1 << 4) - i1;
        return k2;
    }

    private static boolean e()
    {
        return en <= et && ep >= er && eo <= eu && eq >= es;
    }

    private static int a(int i1, int j1, int k1, int l1)
    {
        if(i1 < 0)
            i1 = 0;
        else
        if(i1 >= ex)
            i1 = ex - 1;
        if(j1 < 0)
            j1 = 0;
        else
        if(j1 >= ex)
            j1 = ex - 1;
        if(k1 < 0)
            k1 = 0;
        else
        if(k1 >= ey)
            k1 = ey - 1;
        if(l1 < 0)
            l1 = 0;
        else
        if(l1 >= ey)
            l1 = ey - 1;
        i1 /= ev;
        k1 /= ew;
        j1 /= ev;
        l1 /= ew;
        int i2 = 0;
        for(; i1 <= j1; i1++)
            i2 |= 128 >>> i1;

        i1 = 0;
        for(j1 = 0; j1 < 4; j1++)
        {
            i1 <<= 8;
            if(j1 >= k1 && j1 <= l1)
                i1 |= i2;
        }

        return i1;
    }

    private static long a(long l1)
    {
        return (l1 << 16) / 1000L;
    }

    private static int f(int i1)
    {
        if(i1 < 0)
            return -i1;
        else
            return i1;
    }

    private static long a(int i1, int j1, int k1, int l1)
    {
        long l2;
        long l9 = k1 - i1;
        l2 = 0L;
        l2 = l9 * l9;
        long l3;
        long l10 = l1 - j1;
        l3 = 0L;
        l3 = l10 * l10;
        long l4 = l2 + l3 << 16;
        long l5 = 0L;
        long l6 = 0L;
        long l7 = l4;
        i1 = 39;
        do
        {
            if(i1-- < 0)
                break;
            l6 = l6 << 2 | l7 >>> 62;
            l7 <<= 2;
            long l8 = ((l5 <<= 1) << 1) + 1L;
            if(l6 >= l8)
            {
                l6 -= l8;
                l5++;
            }
        } while(true);
        return l5;
    }

    private static long a(long l1, long l2)
    {
        long l4;
        long l6 = (l2 - l1 << 16) / l2;
        l4 = l6;
        long l5 = l6 * l6 >> 16;
        long l3 = 3L * l5 - 2L * (l5 * l4 >> 16);
        return 0x10000L - l3;
    }

    private static int g(int i1)
    {
        return (c_int_array2d_static_fld[i1][0] << ez) / 0x186a0;
    }

    private static int h(int i1)
    {
        return (c_int_array2d_static_fld[i1][1] << ez) / 0x186a0;
    }

    private static void aC()
    {
        eD = 300;
        eA |= 1;
    }

    private static void aD()
    {
        if(e.d())
            aC();
    }

    private static void aE()
    {
        if((eA & 1) != 0)
            e.b(eD);
        if((eA & 2) != 0)
            e.a(eB, eC);
        eA = 0;
    }

    private static String[] a(String s1, int i1)
    {
        int j1;
        int k1;
        int l1;
        byte byte0;
        int i2;
        int j2;
        byte byte1;
        boolean flag;
        StringBuffer stringbuffer;
        Vector vector;
        j1 = 0;
        s1 = s1.toCharArray();
        k1 = 0;
        l1 = 0;
        byte0 = 0;
        i2 = 0;
        j2 = 0;
        byte1 = 0;
        flag = false;
        stringbuffer = new StringBuffer(i1 / eQ);
        vector = new Vector();
_L8:
        char c1;
        String s2;
        int k2;
        char c3;
        if(j1 >= s1.length)
            break; /* Loop/switch isn't completed */
        c1 = s1[j1];
        k2 = j1;
        s2 = s1;
        c3 = s1[k2];
        if(k2 >= s2.length - 1) goto _L2; else goto _L1
_L1:
        char c2 = s2[k2 + 1];
        if(c3 != ' ' || c2 != '!' && c2 != '?' && c2 != ':') goto _L2; else goto _L3
_L3:
        -1;
          goto _L4
_L2:
        c3 != '\n' ? c3 > ' ' ? c3 != '-' ? ((byte)(c3 != '|' ? 0 : 4)) : 3 : 2 : 1;
_L4:
        JVM INSTR dup ;
        c2;
        JVM INSTR ifle 233;
           goto _L5 _L6
_L5:
        break MISSING_BLOCK_LABEL_175;
_L6:
        break MISSING_BLOCK_LABEL_233;
        i2 = k1;
        j2 = l1;
        byte1 = byte0;
        k1 = j1;
        l1 = stringbuffer.length();
        byte0 = c2;
        flag = true;
        if(c2 == 1)
        {
            vector.addElement(stringbuffer.toString());
            stringbuffer.setLength(0);
            flag = false;
            j1++;
            continue; /* Loop/switch isn't completed */
        }
        if(c2 != 4)
            stringbuffer.append(c1);
        if(flag && a(stringbuffer.toString()) >= i1)
        {
            if(c2 == 3 || byte0 == 4 && j1 - k1 == 1)
            {
                k1 = i2;
                l1 = j2;
                byte0 = byte1;
            }
            if(byte0 == 3)
                l1++;
            stringbuffer.setLength(l1);
            if(byte0 == 4)
                stringbuffer.append('-');
            vector.addElement(stringbuffer.toString());
            stringbuffer.setLength(0);
            j1 = k1;
            flag = false;
        }
        j1++;
        if(true) goto _L8; else goto _L7
_L7:
        vector.addElement(stringbuffer.toString());
        s1 = new String[vector.size()];
        vector.copyInto(s1);
        return s1;
    }

    private static int c(int i1, int j1)
    {
        return Math.abs(a_java_util_Random_static_fld.nextInt() % ((j1 - i1) + 1)) + i1;
    }

    private static a a(int i1, byte abyte0[], byte abyte1[], boolean flag, boolean flag1)
    {
        String s1;
        int ai1[];
        int j2;
        flag = (i1 = e.a(i1)).readUnsignedByte();
        s1 = null;
        switch(flag)
        {
        case 0: // '\0'
            s1 = i1.readUTF();
            break;
        }
        ai1 = new int[flag = i1.readUnsignedByte()];
        for(int l1 = 0; l1 < flag; l1++)
            ai1[l1] = i1.readInt();

        if(abyte0 == null)
        {
            abyte0 = new byte[flag];
            for(int i2 = flag - 1; i2 >= 0; i2--)
                abyte0[i2] = (byte)i2;

        }
        if(abyte1 == null)
            abyte1 = new byte[flag];
        if(!flag1)
            break MISSING_BLOCK_LABEL_197;
        flag = new byte[i1 = (j2 = abyte0.length) << 1];
        i1 = new byte[i1];
        flag1 = j2 - 1;
_L4:
        flag1;
        JVM INSTR iflt 193;
           goto _L1 _L2
_L1:
        break MISSING_BLOCK_LABEL_143;
_L2:
        break; /* Loop/switch isn't completed */
        flag[flag1] = abyte0[flag1];
        flag[flag1 + j2] = abyte0[flag1];
        i1[flag1] = abyte1[flag1];
        i1[flag1 + j2] = (byte)((abyte1[flag1] + 4) % 8);
        flag1--;
        if(true) goto _L4; else goto _L3
_L3:
        abyte0 = flag;
        abyte1 = i1;
        flag = abyte1;
        abyte1 = abyte0;
        abyte0 = ai1;
        i1 = s1;
        (flag1 = new a()).a_int_fld = abyte1.length;
        int j1 = (i1 = e.a(i1)).getWidth();
        flag1.a_javax_microedition_lcdui_Image_fld = i1;
        flag1.a_int_array1d_fld = new int[((a) (flag1)).a_int_fld];
        for(i1 = 0; i1 < ((a) (flag1)).a_int_fld; i1++)
        {
            int k1;
            int k2 = (k1 = abyte0[abyte1[i1] & 0xff]) & 0xff;
            int l2 = (k1 >>>= 8) & 0xff;
            int i3 = (k1 >>>= 8) & 0xff;
            k1 = k1 >>> 8 & 0xff;
            if(flag[i1] == 4)
                k1 = j1 - k1 - l2;
            ((a) (flag1)).a_int_array1d_fld[i1] = k1 << 24 | i3 << 16 | l2 << 8 | k2;
        }

        return flag1;
    }

    private static void a(a a1, int i1, int j1, int k1, int l1)
    {
        if((l1 & 9) != 0)
        {
            int i2 = a1.a(i1);
            if((l1 & 8) != 0)
                j1 -= i2;
            else
                j1 -= i2 >>> 1;
        }
        if((l1 & 0x22) != 0)
        {
            int j2 = a1.b(i1);
            if((l1 & 0x20) != 0)
                k1 -= j2;
            else
                k1 -= j2 >>> 1;
        }
        a1.a(i1, j1, k1);
    }

    private static void C(int i1)
    {
        if(e.a_javax_microedition_lcdui_Graphics_static_fld != null)
            e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(i1);
    }

    private static void a(String s1)
    {
        s1 = e.a(s1);
        b_java_io_DataInputStream_static_fld = new DataInputStream(new ByteArrayInputStream(s1));
    }

    private static String c(int i1)
    {
        String s1 = null;
        try
        {
            b_java_io_DataInputStream_static_fld.reset();
            b_java_io_DataInputStream_static_fld.readInt();
            int j1 = b_java_io_DataInputStream_static_fld.readInt();
            b_java_io_DataInputStream_static_fld.readByte();
            b_java_io_DataInputStream_static_fld.readByte();
            j1 <<= 2;
            i1 <<= 2;
            b_java_io_DataInputStream_static_fld.skipBytes(i1);
            int k1 = b_java_io_DataInputStream_static_fld.readInt();
            b_java_io_DataInputStream_static_fld.skipBytes((j1 - i1) + k1);
            j1 = b_java_io_DataInputStream_static_fld.readUTF();
        }
        catch(Exception _ex)
        {
            j1 = null;
        }
        return j1;
    }

    private static void D(int i1)
    {
        int j1;
        switch(j1 = o_int_array1d_static_fld[i1 << 2])
        {
        case 1: // '\001'
            if((i1 = i1) != eV)
            {
                int k1;
                for(k1 = 0; k1 < 5 && al_int_array1d_static_fld[k1 * 6 + 5] != i1; k1++);
                k1 = (i1 = k1) * 6;
                eW = al_int_array1d_static_fld[k1 + 3];
                eX = al_int_array1d_static_fld[k1];
                eY = al_int_array1d_static_fld[k1 + 1];
                eZ = al_int_array1d_static_fld[k1 + 2];
                eV = al_int_array1d_static_fld[k1 + 5];
                eU = i1;
            }
            eQ = eW;
            eR = eX;
            eS = eY;
            break;
        }
        eT = j1;
    }

    private static int a(String s1)
    {
        switch(eT)
        {
        case 1: // '\001'
            int i1 = (s1 = s1).length();
            s1.getChars(0, i1, a_char_array1d_static_fld, 0);
            return a(a_char_array1d_static_fld, 0, i1);
        }
        return 0;
    }

    private static void a(String s1, int i1, int j1, int k1)
    {
        switch(eT)
        {
        case 1: // '\001'
            a(s1, 0, i1, j1, k1);
            break;
        }
    }

    private static void a(String as1[], int i1, int j1, int k1, int l1)
    {
        switch(eT)
        {
        case 1: // '\001'
            if((l1 & 0x40) != 0)
                k1 -= eY + (as1.length - 1) * eX;
            else
            if((l1 & 2) != 0)
                k1 -= (as1.length * eX) / 2;
            else
            if((l1 & 0x20) != 0)
                k1 -= as1.length * eX;
            l1 &= 0xd;
            for(i1 = 0; i1 < as1.length; i1++)
            {
                a(as1[i1], 0, j1, k1, l1);
                k1 += eX;
            }

            break;
        }
    }

    private static int a(char ac1[], int i1, int j1)
    {
        int k1 = 0;
        a a1 = d_a_array1d_static_fld[eU];
        while(--j1 >= 0) 
            k1 += a1.a(a(ac1[i1++])) + eZ;
        return k1;
    }

    private static int a(char c1)
    {
        if((c1 & 0xffffff00) == 0)
            return a_byte_array2d_static_fld[eU][c1] & 0xff;
        for(int i1 = 0; i1 < a_short_array2d_static_fld[eU].length; i1 += 3)
            if(a_short_array2d_static_fld[eU][i1] == c1)
                return a_short_array2d_static_fld[eU][i1 + 1] & 0xff;

        return 0;
    }

    private static void a(String s1, int i1, int j1, int k1, int l1)
    {
        i1 = s1.length();
        s1.getChars(0, i1, a_char_array1d_static_fld, 0);
        a(a_char_array1d_static_fld, 0, i1, j1, k1, l1);
    }

    private static void a(char ac1[], int i1, int j1, int k1, int l1, int i2)
    {
        if((i2 & 8) != 0)
            k1 -= a(ac1, 0, j1);
        else
        if((i2 & 1) != 0)
            k1 -= a(ac1, 0, j1) / 2;
        if((i2 & 0x60) == 0)
            l1 += eY;
        else
        if((i2 & 0x20) != 0)
            l1 = (l1 - eX) + eY;
        l1++;
        i2 = d_a_array1d_static_fld[eU];
_L9:
        char c1;
        int j2;
        if(--j1 < 0)
            break; /* Loop/switch isn't completed */
        j2 = a(c1 = ac1[i1++]);
        i2;
        j2;
        k1;
        l1;
        if(((c1 = c1) & 0xffffff00) != 0) goto _L2; else goto _L1
_L1:
        b_byte_array2d_static_fld[eU][c1];
          goto _L3
_L2:
        int k2 = 0;
_L7:
        if(k2 >= a_short_array2d_static_fld[eU].length)
            break; /* Loop/switch isn't completed */
        if(a_short_array2d_static_fld[eU][k2] != c1) goto _L5; else goto _L4
_L4:
        a_short_array2d_static_fld[eU][k2 + 2];
          goto _L3
_L5:
        k2 += 3;
        if(true) goto _L7; else goto _L6
_L6:
        false;
_L3:
        JVM INSTR isub ;
        i2.b(j2);
        JVM INSTR isub ;
        a();
        k1 += i2.a(j2) + eZ;
        if(true) goto _L9; else goto _L8
_L8:
    }

    private static int i(int i1)
    {
        boolean flag = true;
        try
        {
            switch(i1)
            {
            case 0: // '\0'
            case 10: // '\n'
            case 33: // '!'
            case 34: // '"'
            case 35: // '#'
                break;

            case 5: // '\005'
                gc = e.a_int_static_fld;
                gd = e.b;
                ao_int_array1d_static_fld = new int[100];
                a_long_array1d_static_fld = new long[10];
                e.a(0, 0, gc, gd);
                fa = 0 + gc / 2;
                fb = 0 + gd / 2;
                ax_int_array1d_static_fld = new int[19];
                ag_boolean_static_fld = true;
                a_c_static_fld = new c();
                ay_int_array1d_static_fld = new int[12];
                break;

            case 20: // '\024'
                ah_boolean_static_fld = false;
                am_int_array1d_static_fld = new int[57];
                an_int_array1d_static_fld = new int[57];
                n_d_array1d_static_fld = new d[9];
                e.a("/b.mbf");
                Y();
                l_a_static_fld = a(173, ((byte []) (null)), ((byte []) (null)), false, false);
                i1 = a_c_static_fld;
                DataInputStream datainputstream;
                (datainputstream = e.a(157)).readUnsignedByte();
                String s1 = datainputstream.readUTF();
                int j1 = datainputstream.readUnsignedByte();
                int k1 = 0;
                i1.a_byte_array1d_fld = new byte[j1 << 2];
                for(int l1 = 0; l1 < j1; l1++)
                {
                    ((c) (i1)).a_byte_array1d_fld[l1 << 2] = datainputstream.readByte();
                    ((c) (i1)).a_byte_array1d_fld[(l1 << 2) + 1] = datainputstream.readByte();
                    ((c) (i1)).a_byte_array1d_fld[(l1 << 2) + 2] = datainputstream.readByte();
                    ((c) (i1)).a_byte_array1d_fld[(l1 << 2) + 3] = datainputstream.readByte();
                    if((((c) (i1)).a_byte_array1d_fld[(l1 << 2) + 2] & 0xff) * (((c) (i1)).a_byte_array1d_fld[(l1 << 2) + 3] & 0xff) > (((c) (i1)).a_byte_array1d_fld[(k1 << 2) + 2] & 0xff) * (((c) (i1)).a_byte_array1d_fld[(k1 << 2) + 3] & 0xff))
                        k1 = l1;
                }

                Image image = e.a(s1);
                i1.a_int_array1d_fld = new int[image.getWidth() * image.getHeight()];
                i1.a_int_fld = image.getWidth();
                image.getRGB(((c) (i1)).a_int_array1d_fld, 0, ((c) (i1)).a_int_fld, 0, 0, image.getWidth(), image.getHeight());
                i1.b = new int[(((c) (i1)).a_byte_array1d_fld[(k1 << 2) + 2] & 0xff) * (((c) (i1)).a_byte_array1d_fld[(k1 << 2) + 3] & 0xff)];
                break;

            case 21: // '\025'
                m_a_static_fld = a(176, ((byte []) (null)), ((byte []) (null)), false, true);
                break;

            case 22: // '\026'
                n_d_array1d_static_fld[0] = d.a(82, 1);
                n_d_array1d_static_fld[1] = d.a(81, 1);
                n_d_array1d_static_fld[2] = d.a(79, 0);
                n_d_array1d_static_fld[3] = d.a(80, 1);
                n_d_array1d_static_fld[4] = d.a(80, 1);
                n_d_array1d_static_fld[5] = d.a(84, 1);
                n_d_array1d_static_fld[6] = d.a(85, 1);
                n_d_array1d_static_fld[7] = d.a(86, 1);
                n_d_array1d_static_fld[8] = d.a(87, 1);
                W();
                v_int_array1d_static_fld[0] = 1;
                P_int_static_fld = 0;
                F();
                e.e();
                ge = 1;
                gf = 0;
                break;

            case 30: // '\036'
                ap_int_array1d_static_fld = new int[256];
                a_c_static_fld.a(8, 15, 8, 24576, true);
                a_c_static_fld.a(13, 11, 8, 24576, true);
                break;

            case 31: // '\037'
                a_c_static_fld.a(9, 16, 8, 24576, true);
                a_c_static_fld.a(10, 5, 8, 24576, true);
                a_c_static_fld.a(11, 17, 8, 24576, true);
                a_c_static_fld.a(12, 10, 8, 24576, true);
                break;

            case 32: // ' '
                a_c_static_fld.a(14, 12, 8, 24576, true);
                a_c_static_fld.a(15, 13, 8, 24576, true);
                a_c_static_fld.a(16, 14, 8, 24576, true);
                a_c_static_fld.a(17, 9, 8, 24576, true);
                break;

            case 40: // '('
                ar_int_array1d_static_fld = new int[104];
                a_c_static_fld.a(7, 6, 8, 24576, true);
                break;

            case 50: // '2'
                as_int_array1d_static_fld = new int[72];
                a_c_static_fld.a(5, 3, 8, 24576, true);
                a_c_static_fld.a(3, 4, 8, 24576, true);
                a_c_static_fld.a(6, 8, 8, 24576, true);
                break;

            case 60: // '<'
                at_int_array1d_static_fld = new int[11];
                au_int_array1d_static_fld = new int[11];
                at_int_array1d_static_fld[0] = 0;
                au_int_array1d_static_fld[0] = 0;
                at_int_array1d_static_fld[1] = l_a_static_fld.a(0);
                au_int_array1d_static_fld[1] = 0;
                at_int_array1d_static_fld[2] = l_a_static_fld.a(0) << 1;
                au_int_array1d_static_fld[2] = 0;
                at_int_array1d_static_fld[3] = 0;
                au_int_array1d_static_fld[3] = 0;
                at_int_array1d_static_fld[4] = l_a_static_fld.a(1);
                au_int_array1d_static_fld[4] = 0;
                at_int_array1d_static_fld[5] = l_a_static_fld.a(1) << 1;
                au_int_array1d_static_fld[5] = 0;
                at_int_array1d_static_fld[6] = 0;
                au_int_array1d_static_fld[6] = 30;
                at_int_array1d_static_fld[7] = 120;
                au_int_array1d_static_fld[7] = 70;
                at_int_array1d_static_fld[8] = 200;
                au_int_array1d_static_fld[8] = 50;
                at_int_array1d_static_fld[9] = 330;
                au_int_array1d_static_fld[9] = 90;
                at_int_array1d_static_fld[10] = 490;
                au_int_array1d_static_fld[10] = 110;
                break;

            case 61: // '='
                a_c_static_fld.a(0, 0, 8, 24576, true);
                break;

            case 62: // '>'
                a_c_static_fld.a(2, 1, 8, 24576, true);
                break;

            case 63: // '?'
                a_c_static_fld.a(1, 2, 8, 24576, true);
                (i1 = a_c_static_fld).a_byte_array1d_fld = null;
                i1.a_int_array1d_fld = null;
                i1.b = null;
                break;

            case 64: // '@'
                n(dZ);
                o(dZ);
                break;

            case 1: // '\001'
            case 2: // '\002'
            case 3: // '\003'
            case 4: // '\004'
            case 6: // '\006'
            case 7: // '\007'
            case 8: // '\b'
            case 9: // '\t'
            case 11: // '\013'
            case 12: // '\f'
            case 13: // '\r'
            case 14: // '\016'
            case 15: // '\017'
            case 16: // '\020'
            case 17: // '\021'
            case 18: // '\022'
            case 19: // '\023'
            case 23: // '\027'
            case 24: // '\030'
            case 25: // '\031'
            case 26: // '\032'
            case 27: // '\033'
            case 28: // '\034'
            case 29: // '\035'
            case 36: // '$'
            case 37: // '%'
            case 38: // '&'
            case 39: // '\''
            case 41: // ')'
            case 42: // '*'
            case 43: // '+'
            case 44: // ','
            case 45: // '-'
            case 46: // '.'
            case 47: // '/'
            case 48: // '0'
            case 49: // '1'
            case 51: // '3'
            case 52: // '4'
            case 53: // '5'
            case 54: // '6'
            case 55: // '7'
            case 56: // '8'
            case 57: // '9'
            case 58: // ':'
            case 59: // ';'
            default:
                flag = false;
                break;
            }
        }
        catch(Exception _ex) { }
        eb = 0;
        if(flag)
            eb += 2;
        L_int_static_fld = a_d_static_fld.a(L_int_static_fld, b_int_static_fld);
        return 1;
    }

    private static void aF()
    {
        ae_boolean_static_fld = true;
        go = 0;
        gp = 800;
    }

    private static int a(int i1, int j1, int k1)
    {
        for(i1 = 0; i1 < ap_int_array1d_static_fld.length; i1 += 16)
            if(ap_int_array1d_static_fld[i1] == 0)
            {
                ap_int_array1d_static_fld[i1 + 12] = j1;
                ap_int_array1d_static_fld[i1 + 5] = k1;
                ap_int_array1d_static_fld[i1 + 3] = 0;
                ap_int_array1d_static_fld[i1 + 14] = 1;
                k(i1, 1);
                return i1;
            }

        return -1;
    }

    private static int j(int i1)
    {
        int j1 = as_int_array1d_static_fld[i1 * 9 + 6];
        as_int_array1d_static_fld[i1 * 9 + 6] = 0;
        if((j1 & 0xf000000) >> 24 == 4)
        {
            int k1 = 0;
            for(i1 = 0; i1 < as_int_array1d_static_fld.length; i1 += 9)
                if((as_int_array1d_static_fld[i1 + 6] & 0xf000000) >> 24 == 4)
                    k1++;

            if(k1 == 0)
                H(130);
        }
        return -1;
    }

    private static int b(int i1, int j1, int k1, int l1)
    {
        for(int i2 = 0; i2 < as_int_array1d_static_fld.length; i2 += 9)
            if(as_int_array1d_static_fld[i2 + 6] == 0)
            {
                as_int_array1d_static_fld[i2] = j1;
                as_int_array1d_static_fld[i2 + 1] = k1;
                as_int_array1d_static_fld[i2 + 2] = l1;
                as_int_array1d_static_fld[i2 + 3] = 0;
                as_int_array1d_static_fld[i2 + 4] = 0;
                as_int_array1d_static_fld[i2 + 5] = 0;
                as_int_array1d_static_fld[i2 + 7] = 0;
                as_int_array1d_static_fld[i2 + 8] = 0;
                as_int_array1d_static_fld[i2 + 6] = 1 + (i1 << 24);
                return i2;
            }

        return -1;
    }

    private static void aG()
    {
        if(fr > fF)
            fr = fF;
        aD();
        F(30);
    }

    private static void k(int i1, int j1)
    {
        switch(j1)
        {
        case 1: // '\001'
            int k1 = ap_int_array1d_static_fld[i1 + 12] * 5 << 2;
            ap_int_array1d_static_fld[i1 + 6] = aq_int_array1d_static_fld[k1] << ez;
            ap_int_array1d_static_fld[i1 + 7] = aq_int_array1d_static_fld[k1 + 1] << ez;
            ap_int_array1d_static_fld[i1 + 8] = aq_int_array1d_static_fld[k1 + 2] * fc;
            ap_int_array1d_static_fld[i1 + 13] = 0;
            ap_int_array1d_static_fld[i1 + 2] = 0;
            d(i1, false);
            break;

        case 20: // '\024'
            ap_int_array1d_static_fld[i1 + 2] = 0;
            break;
        }
        ap_int_array1d_static_fld[i1] = j1;
        ap_int_array1d_static_fld[i1 + 1] = 0;
    }

    private static void E(int i1)
    {
        int j1 = ap_int_array1d_static_fld[i1 + 9];
        int k1 = ap_int_array1d_static_fld[i1 + 10];
        int l1 = ap_int_array1d_static_fld[i1 + 11];
        int j2 = ap_int_array1d_static_fld[i1 + 15] / 100;
        int i2 = av_int_array1d_static_fld[j2];
        j2 = aw_int_array1d_static_fld[j2];
        a_c_static_fld.a(i2, l1, j1, k1);
        if(ap_int_array1d_static_fld[i1 + 3] == 1)
            a_c_static_fld.a(j2, l1, j1, k1);
    }

    private static void d(int i1, boolean flag)
    {
        flag = i1 / 16;
        for(i1 = 0; i1 < ar_int_array1d_static_fld.length; i1 += 13)
            if(ar_int_array1d_static_fld[i1 + 9] == flag)
            {
                ar_int_array1d_static_fld[i1 + 11] = 0;
                ar_int_array1d_static_fld[i1 + 9] = 0;
                ar_int_array1d_static_fld[i1] = 0;
                ar_int_array1d_static_fld[i1 + 1] = 0;
                ar_int_array1d_static_fld[i1 + 2] = 0;
                ar_int_array1d_static_fld[i1 + 3] = 0;
                ar_int_array1d_static_fld[i1 + 4] = 0;
                ar_int_array1d_static_fld[i1 + 5] = 0;
                ar_int_array1d_static_fld[i1 + 10] = 0;
            }

    }

    private static void aH()
    {
        gr = 60;
        gq = 0;
        ag_boolean_static_fld = true;
    }

    private static void aI()
    {
        int i1;
        int l6;
        int i9;
        i1 = b_int_static_fld;
        if(gt != 80 && M_boolean_static_fld)
        {
            e.c(2);
            if((e.d & 0x800) != 0)
            {
                boolean flag = false;
                k_int_static_fld = 17;
            } else
            if(e.c == 2)
            {
                boolean flag1 = false;
                k_int_static_fld = 4;
            }
        }
        gu = i1;
        gw += i1;
        if((gv & 0x10000) == 0)
            break MISSING_BLOCK_LABEL_5251;
        Object obj = null;
        aq_int_array1d_static_fld[0] = 0;
        H();
        J();
        if(ae_boolean_static_fld)
        {
            if((go += b_int_static_fld) >= gp)
            {
                go = gp;
                af_boolean_static_fld = true;
            } else
            {
                af_boolean_static_fld = !af_boolean_static_fld;
            }
        } else
        {
            af_boolean_static_fld = false;
        }
        int j1 = b_int_static_fld;
        fg += j1;
        if((fZ = (fZ = fY >> ez) % 360) < 0)
            fZ += 360;
        ge = n_d_array1d_static_fld[gf].a(ge, j1);
        if((gv & 2) != 0)
        {
            if((e.f & 0x800) > 0)
                fs = fB;
            if((e.e & 0x200) > 0)
                fs = fA;
            boolean flag3 = false;
            boolean flag4 = false;
            if((e.f & 0x100) > 0 || (e.f & 0x200) > 0 || (e.f & 0x400) > 0 || (e.f & 0x10000) > 0)
            {
                H(20);
                flag4 = true;
            }
            if((e.f & 4) > 0 || (e.f & 8) > 0 || (e.f & 0x10) > 0 || (e.f & 0x8000) > 0)
            {
                H(10);
                flag4 = true;
            }
            if((e.f & 0x100) > 0 || (e.f & 0x20) > 0 || (e.f & 4) > 0 || (e.f & 0x2000) > 0)
            {
                H(30);
                flag3 = true;
            }
            if((e.f & 0x400) > 0 || (e.f & 0x80) > 0 || (e.f & 0x10) > 0 || (e.f & 0x4000) > 0)
            {
                H(40);
                flag3 = true;
            }
            if(!flag3)
                H(150);
            if(!flag4)
                H(160);
        }
        if(ft > fv)
            ft = fv;
        if(ft < -fv)
            ft = -fv;
        if(fu > fv)
            fu = fv;
        if(fu < -fv)
            fu = -fv;
        fk += (ft * b_int_static_fld) / 1000;
        fl += (fu * b_int_static_fld) / 1000;
        gi = fk - fn;
        gj = fl - fK;
        fi = 0;
        if((gv & 1) != 0)
        {
            fs = fA;
            if(fr > fC)
                fr -= (fG * j1) / 1000;
            else
                fr += (fs * j1) / 1000;
            if(fr < -fC)
                fr = -fC;
            if((gv & 0x20) != 0)
            {
                fr = fD;
                for(int i2 = 0; i2 < 4; i2++)
                {
                    int k6 = i2 * 3;
                    ay_int_array1d_static_fld[k6] = c(0, 359);
                    ay_int_array1d_static_fld[k6 + 1] = g(ay_int_array1d_static_fld[k6]);
                    ay_int_array1d_static_fld[k6 + 2] = h(ay_int_array1d_static_fld[k6]);
                }

            }
            fi = (fr * j1) / 1000;
            fm += fi;
        }
        if((e.d & 2) > 0)
            ah_boolean_static_fld = !ah_boolean_static_fld;
        int j2;
        if((j2 = fk - fn) > fR)
        {
            fn += j2 - fR;
            fh -= j2 - fR << 2;
        }
        if(j2 < fQ)
        {
            fn += j2 - fQ;
            fh -= j2 - fQ << 2;
        }
        if(fk < -fd / 2)
        {
            fk += fd;
            fn += fd;
        }
        if(fk > fd / 2)
        {
            fk -= fd;
            fn -= fd;
        }
        l6 = -(gc / 2) << ez;
        j2 = gc / 2 << ez;
        int i8 = -(gd / 2) << ez;
        i9 = gd / 2 << ez;
        if(gi > j2)
            gi = j2;
        if(gi < l6)
            gi = l6;
        if(gj > i9)
            gj = i9;
        if(gj < i8)
            gj = i8;
        ad_boolean_static_fld = !ad_boolean_static_fld;
        for(l6 = 0; l6 < ap_int_array1d_static_fld.length; l6 += 16)
        {
            i8 = l6;
            if(ap_int_array1d_static_fld[i8] == 0)
                continue;
            ap_int_array1d_static_fld[i8 + 1] += b_int_static_fld;
            ap_int_array1d_static_fld[i8 + 5] -= b_int_static_fld;
            if(ap_int_array1d_static_fld[i8 + 5] <= 0)
                ap_int_array1d_static_fld[i8 + 5] = 0;
            switch(ap_int_array1d_static_fld[i8])
            {
            default:
                break;

            case 1: // '\001'
                if(ap_int_array1d_static_fld[i8 + 5] == 0)
                    k(i8, 10);
                break;

            case 20: // '\024'
                if(ap_int_array1d_static_fld[i8 + 1] > 500)
                {
                    int l9 = i8 / 16 << 4;
                    ap_int_array1d_static_fld[l9] = 0;
                    int k12 = c(0, 10);
                    int j15 = ap_int_array1d_static_fld[l9 + 6];
                    int k2 = ap_int_array1d_static_fld[l9 + 7];
                    l9 = ap_int_array1d_static_fld[l9 + 8];
                    byte byte0;
                    if(k12 >= 0 && k12 < 6)
                        byte0 = 2;
                    else
                        byte0 = 1;
                    b(byte0, j15, k2, l9);
                    i8 = 0;
                    for(int l12 = 0; l12 < ap_int_array1d_static_fld.length; l12 += 16)
                        if(ap_int_array1d_static_fld[l12] != 0)
                            i8++;

                    if(i8 == 0)
                        H(70);
                }
                continue;

            case 10: // '\n'
                if((ap_int_array1d_static_fld[i8 + 2] & 8) != 0)
                    k(i8, 1);
                break;
            }
            switch(ap_int_array1d_static_fld[i8])
            {
            case 10: // '\n'
                if((ap_int_array1d_static_fld[i8 + 2] & 4) == 0)
                {
                    ap_int_array1d_static_fld[i8 + 15] += b_int_static_fld;
                    ap_int_array1d_static_fld[i8 + 15] %= 400;
                }
                if(ap_int_array1d_static_fld[i8 + 5] == 0)
                    ap_int_array1d_static_fld[i8 + 2] &= -5;
                i9 = i8;
                int i10 = 4 * (ap_int_array1d_static_fld[i9 + 12] * 5 + ap_int_array1d_static_fld[i9 + 13]);
                int i13 = aq_int_array1d_static_fld[i10 + 3];
                if(ap_int_array1d_static_fld[i9 + 1] > i13)
                {
                    ap_int_array1d_static_fld[i9 + 13]++;
                    ap_int_array1d_static_fld[i9 + 1] = 0;
                    if(ap_int_array1d_static_fld[i9 + 13] == 4 && ap_int_array1d_static_fld[i9] != 20)
                    {
                        ap_int_array1d_static_fld[i9 + 13] = 0;
                        d(i9, false);
                    }
                }
                i9 = i8;
                if(ap_int_array1d_static_fld[i9 + 8] <= (fc * 3) / 2)
                {
                    if((gv & 0x10) != 0)
                    {
                        gv &= 0xffffbfff;
                    } else
                    {
                        i10 = ap_int_array1d_static_fld[i9 + 9];
                        i13 = ap_int_array1d_static_fld[i9 + 10];
                        int k15 = ap_int_array1d_static_fld[i9 + 11];
                        int l2 = i10 - k15 / 2;
                        i10 += k15 / 2;
                        int k16 = i13;
                        i13 += k15;
                        if(l2 <= fT && i10 >= fS && k16 <= fV && i13 >= fU)
                        {
                            if(fr > fE)
                                fr = fE;
                            aD();
                            gv = (gv &= 0xffffbfff) | 0x80;
                        }
                    }
                    ap_int_array1d_static_fld[i9 + 2] |= 8;
                }
                i9 = i8;
                i10 = ap_int_array1d_static_fld[i9 + 12];
                i13 = ap_int_array1d_static_fld[i9 + 13];
                int l15 = ap_int_array1d_static_fld[i9 + 13] + 1;
                int i3 = 4 * (i10 * 5 + i13);
                i10 = 4 * (i10 * 5 + l15);
                int l16 = aq_int_array1d_static_fld[i3] << ez;
                i8 = aq_int_array1d_static_fld[i3 + 1] << ez;
                int i17 = aq_int_array1d_static_fld[i3 + 2] << ez;
                i13 = aq_int_array1d_static_fld[i10] << ez;
                l15 = aq_int_array1d_static_fld[i10 + 1] << ez;
                i10 = aq_int_array1d_static_fld[i10 + 2] << ez;
                i3 = aq_int_array1d_static_fld[i3 + 3];
                int j17 = ap_int_array1d_static_fld[i9 + 1];
                i13 = l16 + ((i13 - l16) * j17) / i3;
                i8 += ((l15 - i8) * j17) / i3;
                i3 = (i17 + ((i10 - i17) * j17) / i3) * fc >> ez;
                ap_int_array1d_static_fld[i9 + 6] = i13;
                ap_int_array1d_static_fld[i9 + 7] = i8;
                ap_int_array1d_static_fld[i9 + 8] = i3;
                break;
            }
        }

        for(int j3 = 0; j3 < ar_int_array1d_static_fld.length; j3 += 13)
        {
            if(ar_int_array1d_static_fld[j3 + 11] == 0)
                continue;
            ar_int_array1d_static_fld[j3 + 10] -= j1;
            if(ar_int_array1d_static_fld[j3 + 10] <= 0)
            {
                i8 = (j3 / 13) * 13;
                boolean flag6 = false;
                boolean flag8 = false;
                int j13 = ar_int_array1d_static_fld[i8 + 9] << 4;
                ap_int_array1d_static_fld[j13 + 14]--;
                ap_int_array1d_static_fld[j13 + 2] &= -2;
                if(ap_int_array1d_static_fld[j13 + 14] <= 0)
                {
                    k(j13, 20);
                } else
                {
                    ap_int_array1d_static_fld[j13 + 5] = 300;
                    ap_int_array1d_static_fld[j13 + 2] |= 4;
                }
                ar_int_array1d_static_fld[i8 + 11] = 0;
                ar_int_array1d_static_fld[i8 + 9] = 0;
                ar_int_array1d_static_fld[i8] = 0;
                ar_int_array1d_static_fld[i8 + 1] = 0;
                ar_int_array1d_static_fld[i8 + 2] = 0;
                ar_int_array1d_static_fld[i8 + 3] = 0;
                ar_int_array1d_static_fld[i8 + 4] = 0;
                ar_int_array1d_static_fld[i8 + 5] = 0;
            } else
            {
                l6 = ar_int_array1d_static_fld[j3 + 6];
                i8 = ar_int_array1d_static_fld[j3 + 7];
                i9 = ar_int_array1d_static_fld[j3 + 8];
                int k18 = ar_int_array1d_static_fld[j3 + 9] << 4;
                int j10 = ap_int_array1d_static_fld[k18 + 6];
                int k13 = ap_int_array1d_static_fld[k18 + 7];
                int k17 = ap_int_array1d_static_fld[k18 + 8];
                ar_int_array1d_static_fld[j3] = j10 - ((j10 - l6) * ar_int_array1d_static_fld[j3 + 10]) / 500;
                ar_int_array1d_static_fld[j3 + 1] = k13 - ((k13 - i8) * ar_int_array1d_static_fld[j3 + 10]) / 500;
                ar_int_array1d_static_fld[j3 + 2] = k17 - ((k17 - i9) * ar_int_array1d_static_fld[j3 + 10]) / 500;
            }
        }

        for(int k3 = 0; k3 < as_int_array1d_static_fld.length; k3 += 9)
        {
            if(as_int_array1d_static_fld[k3 + 6] == 0)
                continue;
            as_int_array1d_static_fld[k3 + 2] -= fi;
            as_int_array1d_static_fld[k3 + 7] += b_int_static_fld;
            if((as_int_array1d_static_fld[k3 + 6] & 0xf000000) >> 24 != 4)
            {
                l6 = as_int_array1d_static_fld[k3];
                i8 = as_int_array1d_static_fld[k3 + 1];
                i9 = fn - fk;
                int k10 = -fl + (15 << ez);
                int l13 = (int)a(l6 >> ez, i8 >> ez, i9 >> ez, k10 >> ez);
                long l17 = i9 - l6;
                long l19 = k10 - i8;
                boolean flag2 = i9 < l6;
                l6 = k10 >= i8 ? 0 : 1;
                if(l13 != 0)
                {
                    i8 = 0x4b0000;
                    l17 <<= 16;
                    l19 <<= 16;
                    l17 /= l13;
                    l19 /= l13;
                    l17 *= i8;
                    l19 *= i8;
                    l17 >>= 16;
                    l19 >>= 16;
                    as_int_array1d_static_fld[k3] += (l17 * (long)b_int_static_fld) / 1000L;
                    as_int_array1d_static_fld[k3 + 1] += (l19 * (long)b_int_static_fld) / 1000L;
                    l13 = i9 >= as_int_array1d_static_fld[k3] ? 0 : 1;
                    boolean flag9 = k10 < as_int_array1d_static_fld[k3 + 1];
                    if(flag2 != l13)
                        as_int_array1d_static_fld[k3] = i9;
                    if(l6 != flag9)
                        as_int_array1d_static_fld[k3 + 1] = k10;
                }
            }
            if(as_int_array1d_static_fld[k3 + 2] >= fc << 1)
                continue;
            l6 = as_int_array1d_static_fld[k3 + 3];
            i8 = as_int_array1d_static_fld[k3 + 4];
            i9 = as_int_array1d_static_fld[k3 + 5];
            if((as_int_array1d_static_fld[k3 + 6] & 0xf000000) >> 24 == 4)
                i9 /= 4;
            int l10 = l6 - i9 / 2;
            int i14 = l6 + i9 / 2;
            int i18 = i8 - i9;
            int l18 = i8;
            boolean flag12 = l10 > fT || i14 < fS || i18 > fV || l18 < fU;
            if(as_int_array1d_static_fld[k3 + 2] < fc)
            {
                if(flag12)
                {
                    j(k3 / 9);
                    continue;
                }
                i8 = (l6 = k3 / 9) * 9;
                switch((as_int_array1d_static_fld[i8 + 6] & 0xf000000) >> 24)
                {
                case 1: // '\001'
                    H(80);
                    break;

                case 2: // '\002'
                    H(90);
                    break;

                case 4: // '\004'
                    H(110);
                    H(100);
                    H(120);
                    break;
                }
                int i11 = as_int_array1d_static_fld[i8 + 3];
                int j14 = as_int_array1d_static_fld[i8 + 4];
                a(0, i11, j14, 0, 0);
                j(l6);
                continue;
            }
            if(as_int_array1d_static_fld[k3 + 2] < fc << 2 && as_int_array1d_static_fld[k3 + 2] >= fc && (as_int_array1d_static_fld[k3 + 6] & 0xf000000) >> 24 == 4 && !flag12)
            {
                as_int_array1d_static_fld[k3 + 8] = 1;
                H(110);
                H(100);
                H(120);
            }
        }

        gk = (gj - gh >> ez) + fb;
        gl = (gj + gh >> ez) + fb;
        gm = (gi - gh >> ez) + fa;
        gn = (gi + gh >> ez) + fa;
        a_long_array1d_static_fld[0] = System.currentTimeMillis();
        i9 = fm / fc;
        fW = gb;
        fX = ga;
        if(fl < fO)
            fl = fO;
        if(fl > fP)
            fl = fP;
        fo = 0 << ez;
        fZ = ((fZ = (-fl / 12 >> ez) - 7) + 360) % 360;
        fZ = 0;
        i8 = i9;
        for(l6 = 0; l6 < am_int_array1d_static_fld.length; l6 += 3)
        {
            am_int_array1d_static_fld[l6] = 0;
            am_int_array1d_static_fld[l6 + 1] = 0;
            am_int_array1d_static_fld[l6 + 2] = i8 * fc;
            i8++;
        }

        for(l6 = 0; l6 < am_int_array1d_static_fld.length; l6 += 3)
        {
            am_int_array1d_static_fld[l6] -= fn;
            am_int_array1d_static_fld[l6 + 1] -= fo;
            am_int_array1d_static_fld[l6 + 2] -= fm;
        }

        l6 = 0;
_L2:
        if(l6 >= am_int_array1d_static_fld.length)
            break; /* Loop/switch isn't completed */
        am_int_array1d_static_fld;
        l6;
        JVM INSTR dup2 ;
        JVM INSTR iaload ;
        JVM INSTR iastore ;
        am_int_array1d_static_fld[l6 + 1] -= fW;
        am_int_array1d_static_fld[l6 + 2] -= fX;
        l6 += 3;
        if(true) goto _L2; else goto _L1
_L1:
        for(int i7 = 0; i7 < an_int_array1d_static_fld.length; i7 += 3)
        {
            int j11 = (am_int_array1d_static_fld[i7 + 2] << ez) / ga;
            an_int_array1d_static_fld[i7] = (am_int_array1d_static_fld[i7 + 1] << ez) / j11;
            an_int_array1d_static_fld[i7 + 1] = (am_int_array1d_static_fld[i7] - fd / 2 << ez) / j11;
            an_int_array1d_static_fld[i7 + 2] = (am_int_array1d_static_fld[i7] + fd / 2 << ez) / j11;
        }

        for(int l3 = 0; l3 < ap_int_array1d_static_fld.length; l3 += 16)
            if(ap_int_array1d_static_fld[l3] != 0)
            {
                int k11 = (ap_int_array1d_static_fld[l3 + 8] << ez) / ga;
                ap_int_array1d_static_fld[l3 + 9] = (ap_int_array1d_static_fld[l3 + 6] << ez) / k11;
                ap_int_array1d_static_fld[l3 + 10] = (ap_int_array1d_static_fld[l3 + 7] << ez) / k11;
                ap_int_array1d_static_fld[l3 + 11] = -(a_c_static_fld.a(8) << ez) / k11;
            }

        for(int i4 = 0; i4 < ar_int_array1d_static_fld.length; i4 += 13)
            if(ar_int_array1d_static_fld[i4 + 11] != 0)
            {
                int l11 = (ar_int_array1d_static_fld[i4 + 2] << ez) / ga;
                ar_int_array1d_static_fld[i4 + 3] = (ar_int_array1d_static_fld[i4] << ez) / l11;
                ar_int_array1d_static_fld[i4 + 4] = (ar_int_array1d_static_fld[i4 + 1] << ez) / l11;
                ar_int_array1d_static_fld[i4 + 5] = -(a_c_static_fld.a(7) << ez) / l11;
            }

        for(int j4 = 0; j4 < as_int_array1d_static_fld.length; j4 += 9)
        {
            if(as_int_array1d_static_fld[j4 + 6] == 0)
                continue;
            int i12 = (as_int_array1d_static_fld[j4 + 2] << ez) / ga;
            as_int_array1d_static_fld[j4 + 3] = (as_int_array1d_static_fld[j4] << ez) / i12;
            as_int_array1d_static_fld[j4 + 4] = (as_int_array1d_static_fld[j4 + 1] << ez) / i12;
            if((as_int_array1d_static_fld[j4 + 6] & 0xf000000) >> 24 == 4)
                as_int_array1d_static_fld[j4 + 5] = -(a_c_static_fld.a(6) << ez) / i12;
            else
                as_int_array1d_static_fld[j4 + 5] = -(a_c_static_fld.a(3) << ez) / i12;
        }

        for(int j7 = 0; j7 < an_int_array1d_static_fld.length; j7 += 3)
        {
            an_int_array1d_static_fld[j7] = fb - (an_int_array1d_static_fld[j7] * gd) / ff;
            an_int_array1d_static_fld[j7 + 1] = fa - (an_int_array1d_static_fld[j7 + 1] * gc) / fe;
            an_int_array1d_static_fld[j7 + 2] = fa - (an_int_array1d_static_fld[j7 + 2] * gc) / fe;
        }

        for(int k4 = 0; k4 < ap_int_array1d_static_fld.length; k4 += 16)
            if(ap_int_array1d_static_fld[k4] != 0)
            {
                ap_int_array1d_static_fld[k4 + 9] = fa + (ap_int_array1d_static_fld[k4 + 9] * gc) / fe;
                ap_int_array1d_static_fld[k4 + 10] = fb + (ap_int_array1d_static_fld[k4 + 10] * gc) / fe;
            }

        for(int l4 = 0; l4 < ar_int_array1d_static_fld.length; l4 += 13)
            if(ar_int_array1d_static_fld[l4 + 11] != 0)
            {
                ar_int_array1d_static_fld[l4 + 3] = fa + (ar_int_array1d_static_fld[l4 + 3] * gc) / fe;
                ar_int_array1d_static_fld[l4 + 4] = fb + (ar_int_array1d_static_fld[l4 + 4] * gd) / ff;
            }

        for(int i5 = 0; i5 < as_int_array1d_static_fld.length; i5 += 9)
            if(as_int_array1d_static_fld[i5 + 6] != 0)
            {
                as_int_array1d_static_fld[i5 + 3] = fa + (as_int_array1d_static_fld[i5 + 3] * gc) / fe;
                as_int_array1d_static_fld[i5 + 4] = fb + (as_int_array1d_static_fld[i5 + 4] * gd) / ff;
            }

        fq = fp;
        fp = i9;
        boolean flag7 = false;
        boolean flag10 = false;
        boolean flag11 = false;
        boolean flag13 = false;
        if(fq != fp && (gv & 0x10) == 0)
        {
            int k14;
            int j18 = (k14 = -(fk + fd / 32) + fd / 2) / (fd / 16);
            int j19 = k14 % (fd / 16) >> ez;
            int i19 = 15 - j18;
            int k19 = 3 << (i19 << 1);
            int k1;
            if((k1 = (ax_int_array1d_static_fld[1] & k19) >> (i19 << 1)) > 0)
                switch(k1)
                {
                default:
                    break;

                case 1: // '\001'
                    if(j19 > 30 && j19 < 70 && fl > fN)
                        aG();
                    break;

                case 2: // '\002'
                    if(j19 > 30 && j19 < 70 && fl > fL)
                        aG();
                    break;

                case 3: // '\003'
                    if(j19 > 30 && j19 < 70 && fl < fM)
                        aG();
                    break;
                }
        }
        if(fq != fp)
        {
            int k7;
            for(int j8 = k7 = fp - fq; j8 < ax_int_array1d_static_fld.length; j8++)
                ax_int_array1d_static_fld[j8 - k7] = ax_int_array1d_static_fld[j8];

            for(int j9 = k7; j9 > 0; j9--)
            {
                int j12;
                if(ag_boolean_static_fld)
                {
                    j12 = (c(1, 3) << (c(0, 16) << 1)) + (c(1, 3) << (c(0, 16) << 1)) + (c(1, 3) << (c(0, 16) << 1));
                } else
                {
                    j12 = 0;
                    if(c(0, 3) == 0)
                        j12 = 2 << (c(0, 16) << 1);
                }
                ax_int_array1d_static_fld[ax_int_array1d_static_fld.length - j9] = j12;
            }

            if((gq += k7) > gr)
            {
                ag_boolean_static_fld = false;
                if(gq - gr > 19)
                {
                    gq = -10000;
                    gr = 0;
                    H(140);
                }
            }
        }
label0:
        for(int j5 = 0; j5 < ap_int_array1d_static_fld.length; j5 += 16)
        {
            if((ap_int_array1d_static_fld[j5 + 2] & 4) != 0 || ap_int_array1d_static_fld[j5] != 10 || (ap_int_array1d_static_fld[j5 + 2] & 1) != 0 || ap_int_array1d_static_fld[j5 + 8] >= gg)
                continue;
            int l7 = ap_int_array1d_static_fld[j5 + 9];
            int k8 = ap_int_array1d_static_fld[j5 + 10];
            int l14 = ap_int_array1d_static_fld[j5 + 11];
            int i16 = l7 - l14 / 2;
            int l1 = l7 + l14 / 2;
            l7 = k8;
            k8 += l14;
            if(l1 < gm || i16 > gn || l7 > gl || k8 < gk || ap_int_array1d_static_fld[j5 + 13] == 3)
                continue;
            l7 = j5 / 16;
            if((gv & 0x800) == 0)
                continue;
            k8 = 0;
            do
            {
                if(k8 >= ar_int_array1d_static_fld.length)
                    continue label0;
                if(ar_int_array1d_static_fld[k8 + 11] == 0)
                {
                    ar_int_array1d_static_fld[k8 + 11] = 1;
                    ar_int_array1d_static_fld[k8] = fn - fk;
                    ar_int_array1d_static_fld[k8 + 1] = -fl;
                    ar_int_array1d_static_fld[k8 + 2] = fc;
                    ar_int_array1d_static_fld[k8 + 6] = fn - fk;
                    ar_int_array1d_static_fld[k8 + 7] = -fl;
                    ar_int_array1d_static_fld[k8 + 8] = fc;
                    ar_int_array1d_static_fld[k8 + 9] = l7;
                    int k9 = l7 << 4;
                    ap_int_array1d_static_fld[k9 + 2] |= 1;
                    ar_int_array1d_static_fld[k8 + 10] = 500;
                    continue label0;
                }
                k8 += 13;
            } while(true);
        }

        fj = 0;
        for(int k5 = 0; k5 < 100; k5++)
            ao_int_array1d_static_fld[k5] = 0;

        for(int l5 = 0; l5 < ap_int_array1d_static_fld.length; l5 += 16)
            if(ap_int_array1d_static_fld[l5] != 0)
                ao_int_array1d_static_fld[fj++] = 16 + l5 / 16 + ((ap_int_array1d_static_fld[l5 + 8] >>> ez) << 8);

        for(int i6 = 0; i6 < ar_int_array1d_static_fld.length; i6 += 13)
            if(ar_int_array1d_static_fld[i6 + 11] > 0)
                ao_int_array1d_static_fld[fj++] = 32 + i6 / 13 + ((ar_int_array1d_static_fld[i6 + 2] >>> ez) << 8);

        for(int j6 = 0; j6 < as_int_array1d_static_fld.length; j6 += 9)
            if(as_int_array1d_static_fld[j6 + 6] != 0)
                ao_int_array1d_static_fld[fj++] = 48 + j6 / 9 + ((as_int_array1d_static_fld[j6 + 2] >>> ez) << 8);

        boolean flag5 = false;
        int l8 = fj - 1;
        while(!flag5) 
        {
            flag5 = true;
            int i15 = 0;
            while(i15 < l8) 
            {
                if(ao_int_array1d_static_fld[i15] < ao_int_array1d_static_fld[i15 + 1])
                {
                    flag5 = false;
                    int j16 = ao_int_array1d_static_fld[i15];
                    ao_int_array1d_static_fld[i15] = ao_int_array1d_static_fld[i15 + 1];
                    ao_int_array1d_static_fld[i15 + 1] = j16;
                }
                i15++;
            }
        }
        a_long_array1d_static_fld[1] = System.currentTimeMillis();
        if((gv & 0x10) != 0)
            ac_boolean_static_fld = !ac_boolean_static_fld;
        switch(gt)
        {
        case 80: // 'P'
            if(M_boolean_static_fld)
                F(20);
            break;

        case 0: // '\0'
            if((gv & 0x10000) != 0)
            {
                d_int_static_fld = 6;
                k_int_static_fld = 8;
                F(10);
            }
            break;

        case 10: // '\n'
            if(fl <= fK && fn - fk == 0)
            {
                aK();
                aL();
                F(15);
            }
            break;

        case 20: // '\024'
            if((gv & 0x80) != 0)
                F(40);
            else
            if((gv & 0x40) != 0)
                F(30);
            break;

        case 15: // '\017'
            if(gw > 2000 && M_boolean_static_fld)
            {
                d();
                G(gz);
                F(20);
            }
            break;

        case 30: // '\036'
            if(gw > 800)
            {
                gv |= 0x10;
                F(20);
            } else
            if((gv & 0x80) != 0)
                F(40);
            break;

        case 40: // '('
            gv &= 0xffff7fff;
            if(gw > 800)
            {
                gv |= 0x10;
                F(20);
            }
            break;

        case 50: // '2'
            if(fl >= fP)
                F(60);
            break;

        case 60: // '<'
            if(gw > 1000)
            {
                aK();
                aL();
                k_int_static_fld = 3;
            }
            break;

        case 70: // 'F'
            gv &= 0xffff7fff;
            if(gw > 3000 && M_boolean_static_fld)
            {
                d();
                gz = 0;
            }
            if(dB == 0)
                F(75);
            break;
        }
        if((gv & 0x10000) != 0)
        {
            if((gv & 0x8000) != 0 && (gv & 0x10) == 0)
                gy -= (i1 * 0xe0000) / 1000;
            if(gx <= 0)
                H(50);
            if(gy <= 0)
                H(60);
            gv = (gv &= 0xffffffbf) & 0xffffff7f;
        }
        switch(gt)
        {
        case 10: // '\n'
            H(1);
            H(2);
            return;

        case 20: // '\024'
            if((gv & 0x20) != 0)
            {
                if(gw > 2000)
                    gv = (gv &= 0xffffffdf) & 0xffffffef;
            } else
            if(gw > 1500)
                gv &= 0xffffffef;
            d();
            return;

        case 30: // '\036'
            return;

        case 40: // '('
            return;

        case 50: // '2'
            fl += (fH * i1) / 1000;
            return;

        case 70: // 'F'
            gv = (gv &= -2) & -3;
            H(20);
            H(2);
            return;

        case 15: // '\017'
            H(2);
            H(1);
            return;

        case 0: // '\0'
            if(gA == az_int_array1d_static_fld.length)
            {
                gv |= 0x10000;
                return;
            }
            i(az_int_array1d_static_fld[gA++]);
            break;
        }
        return;
    }

    private static void F(int i1)
    {
        switch(i1)
        {
        case 80: // 'P'
        default:
            break;

        case 10: // '\n'
            ft = 0;
            fu = 0;
            gx = 0x1c20000;
            gy = 0x1c20000;
            if(gt != 60)
                fl = fP;
            gv = (gv = (gv &= 0xffffdfff) & 0xfffff7ff) & 0xffff7fff;
            gf = 0;
            ge = 1;
            aN = 0;
            aO = 0;
            break;

        case 20: // '\024'
            ft = 0;
            fu = 0;
            gv = (gv = (gv = (gv = (gv |= 2) | 1) & 0xffffdfff) | 0x800) | 0x8000;
            gf = 0;
            ge = 1;
            break;

        case 30: // '\036'
            ft = 0;
            fu = 0;
            q(0);
            gv = (gv = (gv = (gv &= 0xfffff7ff) | 0x2000) & -3) & 0xffff7fff;
            gx -= 0x640000;
            gf = 1;
            ge = 1;
            break;

        case 40: // '('
            ft = 0;
            fu = 0;
            q(0);
            gv = (gv = (gv = (gv &= 0xfffff7ff) | 0x2000) & -3) & 0xffff7fff;
            gx -= 0x640000;
            gf = 1;
            ge = 1;
            break;

        case 50: // '2'
            ft = 0;
            fu = 0;
            gv = (gv = (gv = (gv &= 0xfffff7ff) & -3) & -2) & 0xffff7fff;
            gf = 3;
            ge = 1;
            break;

        case 60: // '<'
            ft = 0;
            fu = 0;
            gv = (gv = (gv &= 0xfffff7ff) & 0xfffffcdf) & 0xffff7fff;
            gf = 2;
            ge = 1;
            break;

        case 0: // '\0'
            gA = 0;
            e.a();
            break;

        case 75: // 'K'
            G();
            am_int_array1d_static_fld = null;
            an_int_array1d_static_fld = null;
            ao_int_array1d_static_fld = null;
            n_d_array1d_static_fld = null;
            ap_int_array1d_static_fld = null;
            at_int_array1d_static_fld = null;
            au_int_array1d_static_fld = null;
            as_int_array1d_static_fld = null;
            a_long_array1d_static_fld = null;
            ar_int_array1d_static_fld = null;
            a_c_static_fld = null;
            l_a_static_fld = null;
            m_a_static_fld = null;
            ay_int_array1d_static_fld = null;
            ax_int_array1d_static_fld = null;
            k_int_static_fld = 9;
            break;

        case 15: // '\017'
            ft = 0;
            fu = 0;
            break;

        case 70: // 'F'
            ft = 0;
            fu = 0;
            break;
        }
        gt = i1;
        gw = 0;
    }

    private static void aJ()
    {
        if(gt == 75)
            return;
        if((gv & 0x10000) == 0)
        {
            dY = gA;
            return;
        }
        boolean flag = false;
        int k5 = fm / fc;
        if(gs - an_int_array1d_static_fld[54] != 1 && gs - an_int_array1d_static_fld[54] != -1)
            gs = an_int_array1d_static_fld[54];
        e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(0xff776666);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, gc, gd);
        e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(0xffbb6655);
        e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, 0, gc, gs);
        int l2 = l_a_static_fld.a(0) * 3 - 100;
        int i3 = gc - l2;
        for(int i1 = 0; i1 < 11; i1++)
        {
            byte byte0;
            byte byte1;
            if(i1 < 3)
            {
                byte1 = 0;
                byte0 = 5;
            } else
            if(i1 < 6)
            {
                byte1 = 1;
                byte0 = 4;
            } else
            {
                byte1 = 2;
                byte0 = 3;
            }
            int l5;
            if((l5 = (at_int_array1d_static_fld[i1] + (fh >> ez + byte0)) % l2) < 0)
                l5 += l2;
            l5 += i3;
            a(l_a_static_fld, byte1, l5, gs - au_int_array1d_static_fld[i1], 36);
        }

        int i6 = 0;
        l2 = an_int_array1d_static_fld.length - 3;
label0:
        do
        {
label1:
            {
                if(l2 <= 0)
                    break label0;
                int j6 = k5 + l2 / 3;
                int k4 = 0;
                int j3 = an_int_array1d_static_fld[l2 - 3] - an_int_array1d_static_fld[l2];
                k4 = an_int_array1d_static_fld[l2 + 1] << ez;
                int i5 = an_int_array1d_static_fld[l2 + 2] - an_int_array1d_static_fld[l2 + 1] << ez;
                int k7 = an_int_array1d_static_fld[l2];
                int j5 = (am_int_array1d_static_fld[l2 + 2] << ez) / ga;
                int k8 = -fm + j6 * fc;
                if(j3 > 0)
                {
                    int j13 = (19 - (l2 / 3 + 1) << ez) / 19;
                    int i9 = 119 + (j13 * 100 >> ez);
                    int j10 = 102 + (j13 * 66 >> ez);
                    int i12 = 102 + (j13 * 49 >> ez);
                    int j1 = 0xff000000 + (i9 << 16) + (j10 << 8) + i12;
                    e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(j1);
                    e.a_javax_microedition_lcdui_Graphics_static_fld.fillRect(0, k7, gc, j3);
                }
                do
                    if(ao_int_array1d_static_fld[i6] > k8 && i6 < fj)
                    {
                        int j9 = (ao_int_array1d_static_fld[i6] & 0xf0) >>> 4;
                        int k10 = ao_int_array1d_static_fld[i6] & 0xf;
                        switch(j9)
                        {
                        case 1: // '\001'
                            boolean flag1 = false;
                            int k1 = k10 << 4;
                            if(ap_int_array1d_static_fld[k1] != 0)
                                switch(ap_int_array1d_static_fld[k1])
                                {
                                default:
                                    break;

                                case 10: // '\n'
                                    E(k1);
                                    break;

                                case 20: // '\024'
                                    if(ad_boolean_static_fld)
                                        E(k1);
                                    break;
                                }
                            i6++;
                            break;

                        case 2: // '\002'
                            int j12 = k10 * 13;
                            if(ar_int_array1d_static_fld[j12 + 11] != 0)
                                a_c_static_fld.a(7, ar_int_array1d_static_fld[j12 + 5], ar_int_array1d_static_fld[j12 + 3], ar_int_array1d_static_fld[j12 + 4]);
                            i6++;
                            break;

                        case 3: // '\003'
                            int k12 = k10 * 9;
                            if(as_int_array1d_static_fld[k12 + 6] != 0)
                            {
                                int k13 = (as_int_array1d_static_fld[k12 + 6] & 0xf000000) >> 24;
                                int k3 = as_int_array1d_static_fld[k12 + 3];
                                int j14 = as_int_array1d_static_fld[k12 + 4];
                                int k6 = as_int_array1d_static_fld[k12 + 5];
                                switch(k13)
                                {
                                default:
                                    break;

                                case 1: // '\001'
                                    a_c_static_fld.a(3, k6, k3, j14);
                                    break;

                                case 3: // '\003'
                                    a_c_static_fld.a(4, k6, k3, j14);
                                    break;

                                case 2: // '\002'
                                    a_c_static_fld.a(5, k6, k3, j14);
                                    break;

                                case 4: // '\004'
                                    byte byte3 = ((byte)(as_int_array1d_static_fld[k12 + 8] != 0 ? 6 : 7));
                                    for(int l1 = 0; l1 < 7; l1++)
                                    {
                                        int l10 = as_int_array1d_static_fld[k12 + 7] / 8;
                                        int l7 = g((l1 * 51 + l10) % 360) * k6 >> ez;
                                        int k9 = h((l1 * 51 + l10) % 360) * k6 >> ez;
                                        a_c_static_fld.a(byte3, k6 / 4, k3 + l7, j14 + k9);
                                    }

                                    break;
                                }
                            }
                            i6++;
                            break;
                        }
                    } else
                    {
                        int i8 = an_int_array1d_static_fld[l2];
                        int l13 = i5 >> 4;
                        int i2 = l2 / 3;
                        int k14 = ax_int_array1d_static_fld[i2];
                        for(int j2 = 0; j2 < 16; j2++)
                        {
                            int l3 = j2 << 1;
                            int l9 = 3 << l3;
                            int i11 = (k14 & l9) >> l3;
                            int l12 = k4 + j2 * l13 >> ez;
                            int l6 = k4 + (j2 + 16) * l13 >> ez;
                            l9 = k4 + (j2 - 16) * l13 >> ez;
                            int j15 = i8;
                            switch(i11)
                            {
                            case 1: // '\001'
                                int j11 = -(a_c_static_fld.a(0) << ez) / j5;
                                j15 -= j11;
                                a_c_static_fld.a(0, j11, l12, j15);
                                a_c_static_fld.a(0, j11, l6, j15);
                                a_c_static_fld.a(0, j11, l9, j15);
                                break;

                            case 2: // '\002'
                                int k11 = -(a_c_static_fld.a(2) << ez) / j5;
                                j15 -= k11;
                                a_c_static_fld.a(2, k11, l12, j15);
                                a_c_static_fld.a(2, k11, l6, j15);
                                a_c_static_fld.a(2, k11, l9, j15);
                                break;

                            case 3: // '\003'
                                int l11 = -(a_c_static_fld.a(1) << 2 << ez) / j5;
                                j15 -= l11;
                                l11 /= 4;
                                a_c_static_fld.a(1, l11, l12, j15);
                                a_c_static_fld.a(1, l11, l6, j15);
                                a_c_static_fld.a(1, l11, l9, j15);
                                break;
                            }
                        }

                        break label1;
                    }
                while(true);
            }
            l2 -= 3;
        } while(true);
        a_long_array1d_static_fld[2] = System.currentTimeMillis();
        int j8 = ((fk - fn) * gc) / fe;
        int l8 = ((fl - fo) * gd) / ff;
        int i7 = fa + j8;
        int l4 = fb + l8;
        fS = i7 - (30 * gc) / 100 / 2;
        fT = i7 + (30 * gc) / 100 / 2;
        fU = l4 - (35 * gd) / 100 / 2;
        fV = l4;
        int i10 = 0;
        byte byte2 = 0;
        if(gf == 0)
        {
            byte2 = ((byte)(ft < 0 ? 4 : 0));
            if(ft > fx)
                i10 = 6;
            if(ft > fy)
                i10 = 7;
            if(ft > fz)
                i10 = 8;
            if(ft < -fx)
                i10 = 6;
            if(ft < -fy)
                i10 = 7;
            if(ft < -fz)
                i10 = 8;
        } else
        {
            i10 = gf;
        }
        if(i10 != 0 && i10 != 2)
            ge = 1;
        int i13 = fa + (gi >> ez);
        int i14 = fb + (gj >> ez);
        if(af_boolean_static_fld)
            n_d_array1d_static_fld[5].a(1, m_a_static_fld, i13, i14, byte2);
        e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(0xffff0000);
        if((gv & 0x10) == 0)
            n_d_array1d_static_fld[i10].a(ge, m_a_static_fld, i7, l4, byte2);
        else
        if(ac_boolean_static_fld)
            n_d_array1d_static_fld[i10].a(ge, m_a_static_fld, i7, l4, byte2);
        if((gv & 0x20) != 0)
        {
            for(int i4 = 0; i4 < 4; i4++)
            {
                C(0xffffff);
                int l14 = i4 * 3;
                e.a_javax_microedition_lcdui_Graphics_static_fld.drawLine(i7 + (ay_int_array1d_static_fld[l14 + 1] * 55 >> ez), (l4 + (ay_int_array1d_static_fld[l14 + 2] * 55 >> ez)) - 20, i7 + (ay_int_array1d_static_fld[l14 + 1] * 500 >> ez), (l4 + (ay_int_array1d_static_fld[l14 + 2] * 500 >> ez)) - 20);
            }

        }
        I();
        K();
        boolean flag2 = false;
        for(int k2 = 0; k2 < ap_int_array1d_static_fld.length; k2 += 16)
        {
            if(ap_int_array1d_static_fld[k2] == 0)
                continue;
            int j4 = ap_int_array1d_static_fld[k2 + 9];
            int i15 = ap_int_array1d_static_fld[k2 + 10];
            int j7 = ap_int_array1d_static_fld[k2 + 11];
            if((ap_int_array1d_static_fld[k2 + 2] & 1) != 0)
            {
                e.a_javax_microedition_lcdui_Graphics_static_fld.setColor(0xffff0000);
                e.a_javax_microedition_lcdui_Graphics_static_fld.drawRect(j4 - j7 / 2, i15, j7, j7);
            }
        }

        b(gx, 0x1c20000, gy, 0x1c20000);
        X();
    }

    private static void aK()
    {
        for(int i1 = 0; i1 < ap_int_array1d_static_fld.length; i1 += 16)
            ap_int_array1d_static_fld[i1] = 0;

    }

    private static void aL()
    {
        for(int i1 = 0; i1 < as_int_array1d_static_fld.length; i1 += 9)
            as_int_array1d_static_fld[i1 + 6] = 0;

    }

    private static void G(int i1)
    {
        gv |= 0x4000;
        switch(h_int_static_fld)
        {
        case 1: // '\001'
            switch(i1)
            {
            case 0: // '\0'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 1: // '\001'
                aF();
                a(0, 4, 0);
                a(0, 4, 600);
                a(0, 4, 1200);
                return;

            case 2: // '\002'
                a(0, 6, 0);
                a(0, 6, 500);
                a(0, 6, 1000);
                return;

            case 3: // '\003'
                a(0, 4, 0);
                a(0, 5, 0);
                a(0, 6, 0);
                return;

            case 4: // '\004'
                a(0, 10, 0);
                a(0, 10, 1500);
                a(0, 10, 3000);
                return;

            case 5: // '\005'
                ae_boolean_static_fld = false;
                e(-1, 1, 0);
                e(0, 0, 1);
                e(1, -1, 2);
                e(0, 0, 3);
                e(-1, 1, 4);
                return;

            case 6: // '\006'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 7: // '\007'
                aF();
                a(0, 3, 0);
                a(0, 2, 600);
                a(0, 1, 1200);
                return;

            case 8: // '\b'
                a(0, 1, 0);
                a(0, 2, 500);
                a(0, 3, 1000);
                return;

            case 9: // '\t'
                a(0, 7, 0);
                a(0, 2, 0);
                a(0, 9, 0);
                return;

            case 10: // '\n'
                a(0, 11, 0);
                a(0, 11, 1500);
                a(0, 11, 3000);
                return;

            case 11: // '\013'
                a(0, 12, 0);
                a(0, 12, 1500);
                a(0, 12, 3000);
                return;

            case 12: // '\f'
                ae_boolean_static_fld = false;
                e(-1, -1, 0);
                e(0, 0, 1);
                e(1, 1, 2);
                e(0, 0, 3);
                e(-1, -1, 4);
                return;

            case 13: // '\r'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 14: // '\016'
                F(70);
                break;
            }
            return;

        case 4: // '\004'
            switch(i1)
            {
            case 0: // '\0'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 1: // '\001'
                aF();
                a(0, 7, 0);
                a(0, 4, 600);
                a(0, 1, 1200);
                return;

            case 2: // '\002'
                a(0, 9, 0);
                a(0, 6, 500);
                a(0, 3, 1000);
                return;

            case 3: // '\003'
                a(0, 10, 0);
                a(0, 10, 1500);
                a(0, 10, 3000);
                return;

            case 4: // '\004'
                a(0, 12, 0);
                a(0, 12, 1500);
                a(0, 12, 3000);
                return;

            case 5: // '\005'
                ae_boolean_static_fld = false;
                e(-1, 0, 0);
                e(0, 1, 1);
                e(1, 0, 2);
                e(0, -1, 3);
                e(-1, 0, 4);
                return;

            case 6: // '\006'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 7: // '\007'
                aF();
                a(0, 7, 0);
                a(0, 8, 600);
                a(0, 9, 1200);
                return;

            case 8: // '\b'
                a(0, 9, 0);
                a(0, 8, 500);
                a(0, 7, 1000);
                return;

            case 9: // '\t'
                a(0, 1, 0);
                a(0, 8, 0);
                a(0, 3, 0);
                return;

            case 10: // '\n'
                a(0, 11, 0);
                a(0, 11, 1500);
                a(0, 11, 3000);
                return;

            case 11: // '\013'
                a(0, 12, 0);
                a(0, 12, 1500);
                a(0, 12, 3000);
                return;

            case 12: // '\f'
                ae_boolean_static_fld = false;
                e(-1, 0, 0);
                e(0, -1, 1);
                e(1, 0, 2);
                e(0, 1, 3);
                e(-1, 0, 4);
                return;

            case 13: // '\r'
                ae_boolean_static_fld = false;
                aH();
                return;

            case 14: // '\016'
                F(70);
                break;
            }
            break;
        }
    }

    private static void e(int i1, int j1, int k1)
    {
        int l1 = 0;
        int i2 = 0;
        int j2 = 0;
        if(i1 == -1)
            l1 = -20 << ez;
        if(i1 == 0)
            l1 = 0 << ez;
        if(i1 == 1)
            l1 = 20 << ez;
        if(j1 == -1)
            i2 = -10 << ez;
        if(j1 == 0)
            i2 = 0 << ez;
        if(j1 == 1)
            i2 = 20 << ez;
        if(k1 == 0)
            j2 = 20 * fc;
        if(k1 == 1)
            j2 = 40 * fc;
        if(k1 == 2)
            j2 = 60 * fc;
        if(k1 == 3)
            j2 = 80 * fc;
        if(k1 == 4)
            j2 = 100 * fc;
        b(4, l1, i2, j2);
    }

    private static void H(int i1)
    {
        switch(i1)
        {
        default:
            break;

        case 1: // '\001'
            if(fl > fK && (fl -= (fJ * gu) / 1000) < fK)
                fl = fK;
            if(fl < fK && (fl += (fJ * gu) / 1000) > fK)
            {
                fl = fK;
                return;
            }
            break;

        case 2: // '\002'
            if((i1 = fk - fn) > 0)
            {
                if((fk -= (fI * gu) / 1000) < fn)
                {
                    fk = fn;
                    return;
                }
                break;
            }
            if(i1 < 0 && (fk += (fI * gu) / 1000) > fn)
            {
                fk = fn;
                return;
            }
            break;

        case 40: // '('
            ft += (fw * gu) / 1000;
            return;

        case 30: // '\036'
            ft -= (fw * gu) / 1000;
            return;

        case 150: 
            if(ft > 0 && (ft -= (((fw * 9) / 10) * gu) / 1000) < 0)
                ft = 0;
            if(ft < 0 && (ft += (((fw * 9) / 10) * gu) / 1000) > 0)
            {
                ft = 0;
                return;
            }
            break;

        case 160: 
            if(fu > 0 && (fu -= (((fw * 3) / 4) * gu) / 1000) < 0)
                fu = 0;
            if(fu < 0 && (fu += (((fw * 3) / 4) * gu) / 1000) > 0)
            {
                fu = 0;
                return;
            }
            break;

        case 10: // '\n'
            fu -= (fw * gu) / 1000;
            return;

        case 20: // '\024'
            fu += (fw * gu) / 1000;
            return;

        case 50: // '2'
            if(gt != 50 && gt != 60)
            {
                F(50);
                return;
            }
            break;

        case 60: // '<'
            if(gt != 50 && gt != 60)
            {
                F(50);
                return;
            }
            break;

        case 70: // 'F'
        case 130: 
        case 140: 
            G(++gz);
            return;

        case 80: // 'P'
            if((gx += 0x320000) > 0x1c20000)
            {
                gx = 0x1c20000;
                return;
            }
            break;

        case 90: // 'Z'
            if((gy += 0x3c0000) > 0x1c20000)
            {
                gy = 0x1c20000;
                return;
            }
            break;

        case 110: // 'n'
            gx = 0x1c20000;
            return;

        case 100: // 'd'
            gy = 0x1c20000;
            return;

        case 120: // 'x'
            gv |= 0x20;
            F(20);
            break;
        }
    }

    private static void a(int i1, int j1, int ai1[])
    {
        aE_int_array1d_static_fld[i1 + 10] = j1;
        aE_int_array1d_static_fld[i1 + 11] = ai1[j1 * 3 + 2];
    }

    private static void a(int i1, d ad1[])
    {
        int j1 = aE_int_array1d_static_fld[i1 + 10];
        aE_int_array1d_static_fld[i1 + 11] = ad1[j1].a(aE_int_array1d_static_fld[i1 + 11], b_int_static_fld);
    }

    private static void a(int i1, int j1, int k1, int l1, int i2, int j2, int k2)
    {
        boolean flag = true;
        switch(i1)
        {
        case 2: // '\002'
            flag = al_boolean_static_fld;
            break;

        case 0: // '\0'
            flag = ai_boolean_static_fld;
            break;

        case 1: // '\001'
            flag = aj_boolean_static_fld;
            break;

        case 3: // '\003'
            flag = ak_boolean_static_fld;
            break;
        }
        if(!flag)
        {
            int l2 = i1;
            int j3 = -1;
            int ai1[] = null;
            switch(l2)
            {
            case 0: // '\0'
                j3 = 162;
                ai1 = p_int_array1d_static_fld;
                break;

            case 1: // '\001'
                j3 = 161;
                ai1 = q_int_array1d_static_fld;
                break;

            case 2: // '\002'
                j3 = 160;
                ai1 = r_int_array1d_static_fld;
                break;

            case 3: // '\003'
                j3 = 159;
                ai1 = s_int_array1d_static_fld;
                break;
            }
            a_a_array1d_static_fld[l2] = a(j3, ((byte []) (null)), ((byte []) (null)), false, true);
            j3 = ai1.length / 3;
            a_d_array2d_static_fld[l2] = new d[j3];
            for(int k3 = 0; k3 != j3; k3++)
            {
                int l3 = k3 * 3;
                a_d_array2d_static_fld[l2][k3] = d.a(ai1[l3], ai1[l3 + 1]);
            }

            switch(i1)
            {
            case 2: // '\002'
                al_boolean_static_fld = true;
                break;

            case 0: // '\0'
                ai_boolean_static_fld = true;
                break;

            case 1: // '\001'
                aj_boolean_static_fld = true;
                break;

            case 3: // '\003'
                ak_boolean_static_fld = true;
                break;
            }
        }
        int i3 = gB * 22;
        aE_int_array1d_static_fld[i3 + 2] = j1;
        aE_int_array1d_static_fld[i3 + 3] = k1;
        aE_int_array1d_static_fld[i3 + 4] = l1;
        aE_int_array1d_static_fld[i3 + 5] = i2;
        aE_int_array1d_static_fld[i3 + 6] = j2;
        aE_int_array1d_static_fld[i3 + 7] = k2;
        aE_int_array1d_static_fld[i3] = j1;
        aE_int_array1d_static_fld[i3 + 1] = k1;
        aE_int_array1d_static_fld[i3 + 16] = i1;
        aE_int_array1d_static_fld[i3 + 12] = j2 - j1 >= 0 ? 1 : -1;
        aE_int_array1d_static_fld[i3 + 17] = -1;
        f(i3, 200);
        gB++;
    }

    private static int k(int i1)
    {
        return B_int_static_fld - i1 < 0 ? -1 : 1;
    }

    private static int d(int i1, int j1)
    {
        int ai1[] = null;
        switch(i1)
        {
        case 3: // '\003'
            ai1 = aA_int_array1d_static_fld;
            break;

        case 0: // '\0'
            ai1 = aB_int_array1d_static_fld;
            break;

        case 1: // '\001'
            ai1 = aD_int_array1d_static_fld;
            break;

        case 2: // '\002'
            ai1 = aC_int_array1d_static_fld;
            break;
        }
        return ai1[j1];
    }

    private static long a_long_static_fld;
    private static long b_long_static_fld;
    private static int c_int_static_fld = 0;
    private static int d_int_static_fld = 0;
    private static int e_int_static_fld = 0;
    private static int f_int_static_fld;
    private static int g_int_static_fld;
    private static int h_int_static_fld;
    private static boolean b_boolean_static_fld;
    private static int i_int_static_fld;
    private static int j_int_static_fld = 0;
    private static int k_int_static_fld = 0;
    private static int l_int_static_fld = 0;
    private static int m_int_static_fld;
    private static int n_int_static_fld;
    private static boolean c_boolean_static_fld;
    private static int o_int_static_fld;
    private static int p_int_static_fld;
    private static boolean d_boolean_static_fld;
    private static int q_int_static_fld = 0;
    private static int r_int_static_fld = 0;
    private static int s_int_static_fld;
    private static int t_int_static_fld;
    private static boolean e_boolean_static_fld;
    private static int u_int_static_fld;
    private static a a_a_static_fld;
    private static d a_d_array1d_static_fld[];
    private static d a_d_static_fld;
    private static boolean f_boolean_static_fld;
    private static int v_int_static_fld;
    private static int w_int_static_fld;
    private static int x_int_static_fld;
    private static int y_int_static_fld;
    private static int z_int_static_fld;
    private static int A_int_static_fld;
    private static int B_int_static_fld;
    private static int C_int_static_fld;
    private static int D_int_static_fld;
    private static int E_int_static_fld;
    private static int F_int_static_fld;
    private static int G_int_static_fld;
    private static int H_int_static_fld;
    private static int I_int_static_fld;
    private static int J_int_static_fld;
    private static int K_int_static_fld;
    private static int L_int_static_fld;
    private static int M_int_static_fld;
    private static int N_int_static_fld;
    private static int O_int_static_fld;
    private static int P_int_static_fld = -1;
    private static boolean g_boolean_static_fld;
    private static int Q_int_static_fld;
    private static int R_int_static_fld;
    private static int S_int_static_fld;
    private static int T_int_static_fld;
    private static int U_int_static_fld;
    private static int V_int_static_fld;
    private static int W_int_static_fld;
    private static int X_int_static_fld;
    private static int Y_int_static_fld;
    private static int Z_int_static_fld;
    private static int aa_int_static_fld;
    private static int ab_int_static_fld;
    private static int ac_int_static_fld;
    private static boolean h_boolean_static_fld;
    private static boolean i_boolean_static_fld;
    private static boolean j_boolean_static_fld;
    private static boolean k_boolean_static_fld;
    private static int ad_int_static_fld;
    private static int ae_int_static_fld = -1;
    private static int af_int_static_fld;
    private static int ag_int_static_fld;
    private static int ah_int_static_fld;
    private static int ai_int_static_fld;
    private static int aj_int_static_fld;
    private static int ak_int_static_fld;
    private static boolean l_boolean_static_fld;
    private static int al_int_static_fld;
    private static boolean m_boolean_static_fld;
    private static Image a_javax_microedition_lcdui_Image_static_fld;
    private static String a_java_lang_String_array1d_static_fld[];
    private static String b_java_lang_String_array1d_static_fld[];
    private static String a_java_lang_String_array2d_static_fld[][];
    private static String b_java_lang_String_array2d_static_fld[][];
    private static int a_int_array1d_static_fld[];
    private static int b_int_array1d_static_fld[];
    private static int c_int_array1d_static_fld[];
    private static int d_int_array1d_static_fld[];
    private static int am_int_static_fld;
    private static int an_int_static_fld;
    private static int ao_int_static_fld;
    private static int ap_int_static_fld;
    private static Image b_javax_microedition_lcdui_Image_static_fld;
    private static int aq_int_static_fld = 0;
    private static int ar_int_static_fld = 0;
    private static String c_java_lang_String_array1d_static_fld[] = {
        "both_XL_pax_000.png", "both_XL_pax_001.png", "both_XL_pax_002.png", "both_XL_pax_003.png"
    };
    private static int e_int_array1d_static_fld[] = {
        0x444466, 0x2c170f, 0xaabbff, 0x774466
    };
    private static int f_int_array1d_static_fld[] = {
        0x9988bb, 0x2c170f, 0x665555, 0x552211
    };
    private static boolean n_boolean_static_fld;
    private static boolean o_boolean_static_fld;
    private static boolean p_boolean_static_fld;
    private static String a_java_lang_String_static_fld = "";
    private static boolean q_boolean_static_fld;
    private static int as_int_static_fld;
    private static int at_int_static_fld;
    private static int au_int_static_fld = -1;
    private static boolean r_boolean_static_fld;
    private static int av_int_static_fld;
    private static int aw_int_static_fld;
    private static int ax_int_static_fld;
    private static boolean s_boolean_static_fld;
    private static int ay_int_static_fld;
    private static int az_int_static_fld;
    private static int aA_int_static_fld;
    private static boolean t_boolean_static_fld;
    private static int aB_int_static_fld;
    private static int aC_int_static_fld;
    private static int aD_int_static_fld;
    private static int aE_int_static_fld;
    private static boolean u_boolean_static_fld;
    private static int g_int_array1d_static_fld[] = {
        95, 93, 92, 89, 88, 94, 90, 91
    };
    private static int h_int_array1d_static_fld[] = {
        1, 1, 1, 1, 1, 1, 1, 1
    };
    private static d b_d_array1d_static_fld[];
    private static int i_int_array1d_static_fld[];
    private static int aF;
    private static int aG;
    private static int aH;
    private static int aI;
    private static int aJ;
    private static int aK;
    private static int aL;
    private static int aM;
    private static int aN;
    private static int aO;
    private static int aP;
    private static int aQ;
    private static int aR;
    private static int aS;
    private static int aT;
    private static int aU;
    private static a b_a_static_fld;
    private static final byte a_byte_array1d_static_fld[] = {
        0, 4, 7, 2, 3, 2
    };
    private static boolean v_boolean_static_fld;
    private static int aV;
    private static int aW;
    private static int aX;
    private static int aY;
    private static int aZ;
    private static int ba;
    private static int bb;
    private static int bc;
    private static int j_int_array1d_static_fld[];
    private static int bd;
    private static int a_int_array2d_static_fld[][];
    private static int k_int_array1d_static_fld[];
    private static int be;
    private static int bf;
    private static a c_a_static_fld;
    private static int l_int_array1d_static_fld[];
    private static int m_int_array1d_static_fld[];
    private static a d_a_static_fld;
    private static a e_a_static_fld;
    private static d c_d_array1d_static_fld[];
    private static int b_int_array2d_static_fld[][] = {
        {
            512, 32, 512, 16, 256, 512, 16, 32
        }
    };
    private static int n_int_array1d_static_fld[];
    private static boolean w_boolean_static_fld = false;
    private static int o_int_array1d_static_fld[] = {
        1, -1, -1, 181, 1, -1, -1, 182, 1, -1, 
        -1, 183, 1, -1, -1, 184, 1, -1, -1, 185
    };
    private static int p_int_array1d_static_fld[] = {
        42, 1, 1, 41, 0, 1
    };
    private static int q_int_array1d_static_fld[] = {
        39, 1, 1, 40, 0, 1
    };
    private static int r_int_array1d_static_fld[] = {
        38, 1, 1, 37, 0, 1
    };
    private static int s_int_array1d_static_fld[] = {
        35, 1, 1, 36, 0, 1
    };
    private static final int t_int_array1d_static_fld[] = {
        0, 0, 0, -1, 0, 0, 0, -1, -1, -1, 
        -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 
        1, 1, 1, 1
    };
    private static a a_a_array1d_static_fld[] = new a[4];
    private static d a_d_array2d_static_fld[][] = new d[4][];
    private static int bg;
    private static int bh;
    private static int bi;
    private static int bj;
    private static final int u_int_array1d_static_fld[] = {
        -48, 48, -48, 0, -24, 24, -32, 0, -40, 3, 
        -32, 0, -16, 32, -32, 0, -8, 8, -32, 0, 
        -8, 8, -26, 0, -16, 8, -32, 0, -24, 8, 
        -25, 0, -8, 8, -14, 0, -8, 8, -14, -8, 
        -24, 4, -32, 0, -24, 8, -25, 0, -8, 8, 
        -32, 0, -24, 24, -32, 0, -24, 16, -32, 0, 
        -24, 16, -25, 0, -48, 48, -48, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, -64, 64, -25, 0
    };
    private static int v_int_array1d_static_fld[] = new int[8];
    private static int w_int_array1d_static_fld[];
    private static int bk;
    private static int bl;
    private static int bm;
    private static int bn;
    private static int bo;
    private static int bp;
    private static int bq;
    private static a b_a_array1d_static_fld[];
    private static final int x_int_array1d_static_fld[] = {
        0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 
        0x880000, 0x880000, 0x880000, 0x880000, 0x880000, 0x880000
    };
    private static final int y_int_array1d_static_fld[] = {
        750, 1250, 1000, 1500, 625, 1125, 1000, 1500, 1000, 1500, 
        1000, 1500, 1000, 1500, 1000, 1500
    };
    private static final byte b_byte_array1d_static_fld[] = {
        1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 
        1, 2, 1, 2, 1, 2
    };
    private static d d_d_array1d_static_fld[];
    private static int br;
    private static final int z_int_array1d_static_fld[] = {
        13, 14, 15, 16, 17, 18
    };
    private static final int A_int_array1d_static_fld[] = {
        0, 1, 0, 1, 1, 0, 2, 2, 0, 2, 
        1, 0, 3, 1, 0, 4, 1, 0, 5, 2, 
        0, 5, 1, 0
    };
    private static d e_d_array1d_static_fld[];
    private static int B_int_array1d_static_fld[];
    private static int bs;
    private static int bt = -1;
    private static int C_int_array1d_static_fld[];
    private static final int D_int_array1d_static_fld[] = {
        10, 10, 11, 12
    };
    private static final int E_int_array1d_static_fld[] = {
        0, 1, 1, 0, 1, 1, 1, 1, 0, 2, 
        1, 0
    };
    private static d f_d_array1d_static_fld[];
    private static int bu;
    private static int F_int_array1d_static_fld[];
    private static int bv;
    private static int G_int_array1d_static_fld[];
    private static int bw;
    private static d g_d_array1d_static_fld[];
    private static a f_a_static_fld;
    private static int H_int_array1d_static_fld[] = {
        7, 0, 9, 0, 8, 1
    };
    private static d h_d_array1d_static_fld[];
    private static int bx;
    private static int I_int_array1d_static_fld[];
    private static int by;
    private static int bz;
    private static int bA;
    private static int bB;
    private static int bC;
    private static int J_int_array1d_static_fld[];
    private static int K_int_array1d_static_fld[] = {
        21, 1, 20, 0, 23, 0, 22, 0, 24, 0, 
        19, 1
    };
    private static boolean x_boolean_static_fld;
    private static boolean y_boolean_static_fld;
    private static int bD;
    private static int bE;
    private static int bF;
    private static int bG;
    private static int bH;
    private static int bI;
    private static int bJ;
    private static int bK;
    private static int bL;
    private static int bM;
    private static int bN;
    private static int bO;
    private static int bP;
    private static int bQ;
    private static int bR;
    private static d i_d_array1d_static_fld[];
    private static int bS;
    private static int L_int_array1d_static_fld[];
    private static int bT;
    private static int bU = 152;
    private static int M_int_array1d_static_fld[] = {
        0, 1, 1, 1, 1, 1, 2, 1, 1, 3, 
        1, 1, 4, 1, 1, 6, 1, 1, 5, 1, 
        1
    };
    private static int N_int_array1d_static_fld[] = {
        3, 3, 5, 3, 0, 1, 0, 2, 6, 2
    };
    private static int O_int_array1d_static_fld[] = {
        5, 0, 5, 2, 5, 3, 0, 1, 5, 4
    };
    private static int P_int_array1d_static_fld[] = {
        1, 0, 2, 3, 4
    };
    private static int Q_int_array1d_static_fld[] = {
        2, -19, -1, 1, -28, 513, 3, -20, 27, 1, 
        1, 513, 4, -13, 12, 3, -2, 60
    };
    private static int R_int_array1d_static_fld[] = {
        0, 0, 0, 6, -16, 34, 18, 33, 4, 23, 
        0, 0, 0, -5, 0, 9, -14, 22, 19, 22, 
        5, 17, 0, 0, 0, 0, 0, 6, -9, 34, 
        10, 33, 4, 21, 0, 0, 0, 0, 0, 7, 
        -19, 60, 16, 33, 4, 24, 0, 0, 0, 0, 
        0, 8, -15, 34, 19, 57, 4, 25, 0, 0
    };
    private static int bV;
    private static int bW;
    private static int bX;
    private static int bY;
    private static int bZ;
    private static int ca;
    private static int cb;
    private static int cc;
    private static a g_a_static_fld;
    private static d j_d_array1d_static_fld[];
    private static int S_int_array1d_static_fld[];
    private static int T_int_array1d_static_fld[];
    private static int cd;
    private static int U_int_array1d_static_fld[];
    private static int V_int_array1d_static_fld[];
    private static int W_int_array1d_static_fld[];
    private static int X_int_array1d_static_fld[];
    private static int Y_int_array1d_static_fld[];
    private static int Z_int_array1d_static_fld[];
    private static int ce;
    private static int cf;
    private static int aa_int_array1d_static_fld[];
    private static int cg;
    private static int ch;
    private static int ci;
    private static int cj;
    private static int ck;
    private static int cl;
    private static int cm;
    private static int cn;
    private static boolean z_boolean_static_fld;
    private static boolean A_boolean_static_fld;
    private static boolean B_boolean_static_fld;
    private static int co;
    private static int cp;
    private static boolean C_boolean_static_fld;
    private static int cq;
    private static int cr;
    private static int cs;
    private static int ct;
    private static int cu;
    private static int cv;
    private static int cw;
    private static int ab_int_array1d_static_fld[];
    private static int ac_int_array1d_static_fld[];
    private static int cx;
    private static int cy;
    private static boolean D_boolean_static_fld;
    private static int cz;
    private static int cA;
    private static int cB;
    private static boolean E_boolean_static_fld;
    private static boolean F_boolean_static_fld;
    private static int cC;
    private static int cD = 5;
    private static int cE;
    private static int cF;
    private static int cG;
    private static int cH;
    private static String d_java_lang_String_array1d_static_fld[];
    private static int ad_int_array1d_static_fld[];
    private static int ae_int_array1d_static_fld[];
    private static int cI;
    private static int cJ;
    private static int cK;
    private static int cL;
    private static int cM;
    private static int cN;
    private static int cO = 0;
    private static int af_int_array1d_static_fld[];
    private static String e_java_lang_String_array1d_static_fld[];
    private static int ag_int_array1d_static_fld[];
    private static String f_java_lang_String_array1d_static_fld[];
    private static int ah_int_array1d_static_fld[];
    private static int cP;
    private static int cQ;
    private static int cR;
    private static int cS;
    private static int cT;
    private static int cU;
    private static int cV;
    private static int cW;
    private static Vector a_java_util_Vector_static_fld;
    private static Vector b_java_util_Vector_static_fld;
    private static int cX;
    private static int cY;
    private static int cZ;
    private static int da;
    private static int db;
    private static int dc;
    private static int dd;
    private static int de;
    private static int df = 0;
    private static int dg = 0;
    private static boolean G_boolean_static_fld;
    private static boolean H_boolean_static_fld;
    private static boolean I_boolean_static_fld;
    private static int dh = -1;
    private static int di = 3;
    private static int dj = 5;
    private static int dk = 6;
    private static int dl = 3;
    private static int dm = 4;
    private static int dn = 5;
    private static boolean a_boolean_array1d_static_fld[] = new boolean[6];
    private static int ai_int_array1d_static_fld[] = {
        96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 
        113, 114
    };
    private static d k_d_array1d_static_fld[];
    private static a h_a_static_fld;
    private static boolean J_boolean_static_fld;
    private static int _flddo;
    private static int dp;
    private static int dq;
    private static int dr;
    private static a i_a_static_fld;
    private static d l_d_array1d_static_fld[];
    private static int ds;
    private static int dt;
    private static int du;
    private static int dv;
    private static boolean K_boolean_static_fld;
    private static int dw;
    private static int dx;
    private static int dy;
    private static int dz;
    private static int dA;
    private static int dB;
    private static int dC;
    private static int dD;
    private static int dE;
    private static int dF;
    private static boolean L_boolean_static_fld;
    private static boolean M_boolean_static_fld;
    private static boolean N_boolean_static_fld = false;
    private static a j_a_static_fld;
    private static a k_a_static_fld;
    private static d b_d_static_fld;
    private static d c_d_static_fld;
    private static int dG;
    private static boolean O_boolean_static_fld = true;
    private static int dH;
    private static int dI = 0;
    private static boolean P_boolean_static_fld;
    private static int dJ;
    private static int dK;
    private static boolean Q_boolean_static_fld;
    private static boolean R_boolean_static_fld;
    private static boolean S_boolean_static_fld;
    private static boolean T_boolean_static_fld;
    private static boolean U_boolean_static_fld;
    private static int dL;
    private static int dM;
    private static int dN;
    private static int dO;
    private static int dP;
    private static int dQ;
    private static int dR;
    private static int dS;
    private static boolean V_boolean_static_fld;
    private static int dT;
    private static int dU;
    private static int dV;
    private static int dW;
    private static int dX;
    private static boolean W_boolean_static_fld;
    private static int dY;
    private static DataInputStream a_java_io_DataInputStream_static_fld;
    private static boolean X_boolean_static_fld;
    private static int dZ;
    private static int ea;
    private static int eb;
    private static String g_java_lang_String_array1d_static_fld[] = {
        "g_catacombs_1.area", null, "g_dream_forest_1.area", "g_dragon_city_1.area", null, "g_scorched_lands_1.area", "g_scorched_lands_boss.area"
    };
    private static int aj_int_array1d_static_fld[] = {
        0, 0, 1, 2, 0, 3, 3
    };
    private static int ec;
    private static Image c_javax_microedition_lcdui_Image_static_fld;
    private static int ed;
    private static boolean Y_boolean_static_fld;
    private static int ee;
    private static String h_java_lang_String_array1d_static_fld[];
    private static String i_java_lang_String_array1d_static_fld[];
    private static int ef;
    private static int eg;
    private static boolean Z_boolean_static_fld;
    private static boolean aa_boolean_static_fld;
    private static int eh;
    private static int ei;
    private static boolean ab_boolean_static_fld;
    private static int ej;
    private static int ek;
    private static int el;
    private static byte c_byte_array1d_static_fld[];
    private static int em;
    private static int en;
    private static int eo;
    private static int ep;
    private static int eq;
    private static int er;
    private static int es;
    private static int et;
    private static int eu;
    private static int ev;
    private static int ew;
    private static int ex;
    private static int ey;
    private static int ez;
    private static int c_int_array2d_static_fld[][] = {
        {
            0x186a0, 0
        }, {
            0x18691, 1745
        }, {
            0x18663, 3490
        }, {
            0x18617, 5234
        }, {
            0x185ac, 6976
        }, {
            0x18523, 8716
        }, {
            0x1847c, 10453
        }, {
            0x183b7, 12187
        }, {
            0x182d3, 13917
        }, {
            0x181d1, 15643
        }, {
            0x180b1, 17365
        }, {
            0x17f73, 19081
        }, {
            0x17e17, 20791
        }, {
            0x17c9d, 22495
        }, {
            0x17b06, 24192
        }, {
            0x17951, 25882
        }, {
            0x1777e, 27564
        }, {
            0x1758e, 29237
        }, {
            0x17382, 30902
        }, {
            0x17158, 32557
        }, {
            0x16f11, 34202
        }, {
            0x16cae, 35837
        }, {
            0x16a2e, 37461
        }, {
            0x16792, 39073
        }, {
            0x164db, 40674
        }, {
            0x16207, 42262
        }, {
            0x15f17, 43837
        }, {
            0x15c0d, 45399
        }, {
            0x158e7, 46947
        }, {
            0x155a6, 48481
        }, {
            0x1524b, 50000
        }, {
            0x14ed5, 51504
        }, {
            0x14b45, 52992
        }, {
            0x1479b, 54464
        }, {
            0x143d8, 55919
        }, {
            0x13ffb, 57358
        }, {
            0x13c06, 58779
        }, {
            0x137f8, 60182
        }, {
            0x133d1, 61566
        }, {
            0x12f93, 62932
        }, {
            0x12b3c, 64279
        }, {
            0x126cf, 0x10046
        }, {
            0x1224a, 0x10561
        }, {
            0x11daf, 0x10a68
        }, {
            0x118fe, 0x10f5a
        }, {
            0x11437, 0x11437
        }, {
            0x10f5a, 0x118fe
        }, {
            0x10a68, 0x11daf
        }, {
            0x10561, 0x1224a
        }, {
            0x10046, 0x126cf
        }, {
            64279, 0x12b3c
        }, {
            62932, 0x12f93
        }, {
            61566, 0x133d1
        }, {
            60182, 0x137f8
        }, {
            58779, 0x13c06
        }, {
            57358, 0x13ffb
        }, {
            55919, 0x143d8
        }, {
            54464, 0x1479b
        }, {
            52992, 0x14b45
        }, {
            51504, 0x14ed5
        }, {
            50000, 0x1524b
        }, {
            48481, 0x155a6
        }, {
            46947, 0x158e7
        }, {
            45399, 0x15c0d
        }, {
            43837, 0x15f17
        }, {
            42262, 0x16207
        }, {
            40674, 0x164db
        }, {
            39073, 0x16792
        }, {
            37461, 0x16a2e
        }, {
            35837, 0x16cae
        }, {
            34202, 0x16f11
        }, {
            32557, 0x17158
        }, {
            30902, 0x17382
        }, {
            29237, 0x1758e
        }, {
            27564, 0x1777e
        }, {
            25882, 0x17951
        }, {
            24192, 0x17b06
        }, {
            22495, 0x17c9d
        }, {
            20791, 0x17e17
        }, {
            19081, 0x17f73
        }, {
            17365, 0x180b1
        }, {
            15643, 0x181d1
        }, {
            13917, 0x182d3
        }, {
            12187, 0x183b7
        }, {
            10453, 0x1847c
        }, {
            8716, 0x18523
        }, {
            6976, 0x185ac
        }, {
            5234, 0x18617
        }, {
            3490, 0x18663
        }, {
            1745, 0x18691
        }, {
            0, 0x186a0
        }, {
            -1745, 0x18691
        }, {
            -3490, 0x18663
        }, {
            -5234, 0x18617
        }, {
            -6976, 0x185ac
        }, {
            -8716, 0x18523
        }, {
            -10453, 0x1847c
        }, {
            -12187, 0x183b7
        }, {
            -13917, 0x182d3
        }, {
            -15643, 0x181d1
        }, {
            -17365, 0x180b1
        }, {
            -19081, 0x17f73
        }, {
            -20791, 0x17e17
        }, {
            -22495, 0x17c9d
        }, {
            -24192, 0x17b06
        }, {
            -25882, 0x17951
        }, {
            -27564, 0x1777e
        }, {
            -29237, 0x1758e
        }, {
            -30902, 0x17382
        }, {
            -32557, 0x17158
        }, {
            -34202, 0x16f11
        }, {
            -35837, 0x16cae
        }, {
            -37461, 0x16a2e
        }, {
            -39073, 0x16792
        }, {
            -40674, 0x164db
        }, {
            -42262, 0x16207
        }, {
            -43837, 0x15f17
        }, {
            -45399, 0x15c0d
        }, {
            -46947, 0x158e7
        }, {
            -48481, 0x155a6
        }, {
            -50000, 0x1524b
        }, {
            -51504, 0x14ed5
        }, {
            -52992, 0x14b45
        }, {
            -54464, 0x1479b
        }, {
            -55919, 0x143d8
        }, {
            -57358, 0x13ffb
        }, {
            -58779, 0x13c06
        }, {
            -60182, 0x137f8
        }, {
            -61566, 0x133d1
        }, {
            -62932, 0x12f93
        }, {
            -64279, 0x12b3c
        }, {
            0xfffeffba, 0x126cf
        }, {
            0xfffefa9f, 0x1224a
        }, {
            0xfffef598, 0x11daf
        }, {
            0xfffef0a6, 0x118fe
        }, {
            0xfffeebc9, 0x11437
        }, {
            0xfffee702, 0x10f5a
        }, {
            0xfffee251, 0x10a68
        }, {
            0xfffeddb6, 0x10561
        }, {
            0xfffed931, 0x10046
        }, {
            0xfffed4c4, 64279
        }, {
            0xfffed06d, 62932
        }, {
            0xfffecc2f, 61566
        }, {
            0xfffec808, 60182
        }, {
            0xfffec3fa, 58779
        }, {
            0xfffec005, 57358
        }, {
            0xfffebc28, 55919
        }, {
            0xfffeb865, 54464
        }, {
            0xfffeb4bb, 52992
        }, {
            0xfffeb12b, 51504
        }, {
            0xfffeadb5, 50000
        }, {
            0xfffeaa5a, 48481
        }, {
            0xfffea719, 46947
        }, {
            0xfffea3f3, 45399
        }, {
            0xfffea0e9, 43837
        }, {
            0xfffe9df9, 42262
        }, {
            0xfffe9b25, 40674
        }, {
            0xfffe986e, 39073
        }, {
            0xfffe95d2, 37461
        }, {
            0xfffe9352, 35837
        }, {
            0xfffe90ef, 34202
        }, {
            0xfffe8ea8, 32557
        }, {
            0xfffe8c7e, 30902
        }, {
            0xfffe8a72, 29237
        }, {
            0xfffe8882, 27564
        }, {
            0xfffe86af, 25882
        }, {
            0xfffe84fa, 24192
        }, {
            0xfffe8363, 22495
        }, {
            0xfffe81e9, 20791
        }, {
            0xfffe808d, 19081
        }, {
            0xfffe7f4f, 17365
        }, {
            0xfffe7e2f, 15643
        }, {
            0xfffe7d2d, 13917
        }, {
            0xfffe7c49, 12187
        }, {
            0xfffe7b84, 10453
        }, {
            0xfffe7add, 8716
        }, {
            0xfffe7a54, 6976
        }, {
            0xfffe79e9, 5234
        }, {
            0xfffe799d, 3490
        }, {
            0xfffe796f, 1745
        }, {
            0xfffe7960, 0
        }, {
            0xfffe796f, -1745
        }, {
            0xfffe799d, -3490
        }, {
            0xfffe79e9, -5234
        }, {
            0xfffe7a54, -6976
        }, {
            0xfffe7add, -8716
        }, {
            0xfffe7b84, -10453
        }, {
            0xfffe7c49, -12187
        }, {
            0xfffe7d2d, -13917
        }, {
            0xfffe7e2f, -15643
        }, {
            0xfffe7f4f, -17365
        }, {
            0xfffe808d, -19081
        }, {
            0xfffe81e9, -20791
        }, {
            0xfffe8363, -22495
        }, {
            0xfffe84fa, -24192
        }, {
            0xfffe86af, -25882
        }, {
            0xfffe8882, -27564
        }, {
            0xfffe8a72, -29237
        }, {
            0xfffe8c7e, -30902
        }, {
            0xfffe8ea8, -32557
        }, {
            0xfffe90ef, -34202
        }, {
            0xfffe9352, -35837
        }, {
            0xfffe95d2, -37461
        }, {
            0xfffe986e, -39073
        }, {
            0xfffe9b25, -40674
        }, {
            0xfffe9df9, -42262
        }, {
            0xfffea0e9, -43837
        }, {
            0xfffea3f3, -45399
        }, {
            0xfffea719, -46947
        }, {
            0xfffeaa5a, -48481
        }, {
            0xfffeadb5, -50000
        }, {
            0xfffeb12b, -51504
        }, {
            0xfffeb4bb, -52992
        }, {
            0xfffeb865, -54464
        }, {
            0xfffebc28, -55919
        }, {
            0xfffec005, -57358
        }, {
            0xfffec3fa, -58779
        }, {
            0xfffec808, -60182
        }, {
            0xfffecc2f, -61566
        }, {
            0xfffed06d, -62932
        }, {
            0xfffed4c4, -64279
        }, {
            0xfffed931, 0xfffeffba
        }, {
            0xfffeddb6, 0xfffefa9f
        }, {
            0xfffee251, 0xfffef598
        }, {
            0xfffee702, 0xfffef0a6
        }, {
            0xfffeebc9, 0xfffeebc9
        }, {
            0xfffef0a6, 0xfffee702
        }, {
            0xfffef598, 0xfffee251
        }, {
            0xfffefa9f, 0xfffeddb6
        }, {
            0xfffeffba, 0xfffed931
        }, {
            -64279, 0xfffed4c4
        }, {
            -62932, 0xfffed06d
        }, {
            -61566, 0xfffecc2f
        }, {
            -60182, 0xfffec808
        }, {
            -58779, 0xfffec3fa
        }, {
            -57358, 0xfffec005
        }, {
            -55919, 0xfffebc28
        }, {
            -54464, 0xfffeb865
        }, {
            -52992, 0xfffeb4bb
        }, {
            -51504, 0xfffeb12b
        }, {
            -50000, 0xfffeadb5
        }, {
            -48481, 0xfffeaa5a
        }, {
            -46947, 0xfffea719
        }, {
            -45399, 0xfffea3f3
        }, {
            -43837, 0xfffea0e9
        }, {
            -42262, 0xfffe9df9
        }, {
            -40674, 0xfffe9b25
        }, {
            -39073, 0xfffe986e
        }, {
            -37461, 0xfffe95d2
        }, {
            -35837, 0xfffe9352
        }, {
            -34202, 0xfffe90ef
        }, {
            -32557, 0xfffe8ea8
        }, {
            -30902, 0xfffe8c7e
        }, {
            -29237, 0xfffe8a72
        }, {
            -27564, 0xfffe8882
        }, {
            -25882, 0xfffe86af
        }, {
            -24192, 0xfffe84fa
        }, {
            -22495, 0xfffe8363
        }, {
            -20791, 0xfffe81e9
        }, {
            -19081, 0xfffe808d
        }, {
            -17365, 0xfffe7f4f
        }, {
            -15643, 0xfffe7e2f
        }, {
            -13917, 0xfffe7d2d
        }, {
            -12187, 0xfffe7c49
        }, {
            -10453, 0xfffe7b84
        }, {
            -8716, 0xfffe7add
        }, {
            -6976, 0xfffe7a54
        }, {
            -5234, 0xfffe79e9
        }, {
            -3490, 0xfffe799d
        }, {
            -1745, 0xfffe796f
        }, {
            0, 0xfffe7960
        }, {
            1745, 0xfffe796f
        }, {
            3490, 0xfffe799d
        }, {
            5234, 0xfffe79e9
        }, {
            6976, 0xfffe7a54
        }, {
            8716, 0xfffe7add
        }, {
            10453, 0xfffe7b84
        }, {
            12187, 0xfffe7c49
        }, {
            13917, 0xfffe7d2d
        }, {
            15643, 0xfffe7e2f
        }, {
            17365, 0xfffe7f4f
        }, {
            19081, 0xfffe808d
        }, {
            20791, 0xfffe81e9
        }, {
            22495, 0xfffe8363
        }, {
            24192, 0xfffe84fa
        }, {
            25882, 0xfffe86af
        }, {
            27564, 0xfffe8882
        }, {
            29237, 0xfffe8a72
        }, {
            30902, 0xfffe8c7e
        }, {
            32557, 0xfffe8ea8
        }, {
            34202, 0xfffe90ef
        }, {
            35837, 0xfffe9352
        }, {
            37461, 0xfffe95d2
        }, {
            39073, 0xfffe986e
        }, {
            40674, 0xfffe9b25
        }, {
            42262, 0xfffe9df9
        }, {
            43837, 0xfffea0e9
        }, {
            45399, 0xfffea3f3
        }, {
            46947, 0xfffea719
        }, {
            48481, 0xfffeaa5a
        }, {
            50000, 0xfffeadb5
        }, {
            51504, 0xfffeb12b
        }, {
            52992, 0xfffeb4bb
        }, {
            54464, 0xfffeb865
        }, {
            55919, 0xfffebc28
        }, {
            57358, 0xfffec005
        }, {
            58779, 0xfffec3fa
        }, {
            60182, 0xfffec808
        }, {
            61566, 0xfffecc2f
        }, {
            62932, 0xfffed06d
        }, {
            64279, 0xfffed4c4
        }, {
            0x10046, 0xfffed931
        }, {
            0x10561, 0xfffeddb6
        }, {
            0x10a68, 0xfffee251
        }, {
            0x10f5a, 0xfffee702
        }, {
            0x11437, 0xfffeebc9
        }, {
            0x118fe, 0xfffef0a6
        }, {
            0x11daf, 0xfffef598
        }, {
            0x1224a, 0xfffefa9f
        }, {
            0x126cf, 0xfffeffba
        }, {
            0x12b3c, -64279
        }, {
            0x12f93, -62932
        }, {
            0x133d1, -61566
        }, {
            0x137f8, -60182
        }, {
            0x13c06, -58779
        }, {
            0x13ffb, -57358
        }, {
            0x143d8, -55919
        }, {
            0x1479b, -54464
        }, {
            0x14b45, -52992
        }, {
            0x14ed5, -51504
        }, {
            0x1524b, -50000
        }, {
            0x155a6, -48481
        }, {
            0x158e7, -46947
        }, {
            0x15c0d, -45399
        }, {
            0x15f17, -43837
        }, {
            0x16207, -42262
        }, {
            0x164db, -40674
        }, {
            0x16792, -39073
        }, {
            0x16a2e, -37461
        }, {
            0x16cae, -35837
        }, {
            0x16f11, -34202
        }, {
            0x17158, -32557
        }, {
            0x17382, -30902
        }, {
            0x1758e, -29237
        }, {
            0x1777e, -27564
        }, {
            0x17951, -25882
        }, {
            0x17b06, -24192
        }, {
            0x17c9d, -22495
        }, {
            0x17e17, -20791
        }, {
            0x17f73, -19081
        }, {
            0x180b1, -17365
        }, {
            0x181d1, -15643
        }, {
            0x182d3, -13917
        }, {
            0x183b7, -12187
        }, {
            0x1847c, -10453
        }, {
            0x18523, -8716
        }, {
            0x185ac, -6976
        }, {
            0x18617, -5234
        }, {
            0x18663, -3490
        }, {
            0x18691, -1745
        }
    };
    private static int eA;
    private static int eB;
    private static int eC;
    private static int eD;
    private static Random a_java_util_Random_static_fld = new Random();
    private static DataInputStream b_java_io_DataInputStream_static_fld;
    private static a c_a_array1d_static_fld[];
    private static d m_d_array1d_static_fld[];
    private static int ak_int_array1d_static_fld[];
    private static byte d_byte_array1d_static_fld[];
    private static byte e_byte_array1d_static_fld[];
    private static int eE;
    private static int eF;
    private static int eG;
    private static int eH;
    private static int eI;
    private static int eJ;
    private static int eK;
    private static int eL;
    private static int eM;
    private static int eN;
    private static int eO;
    private static int eP;
    private static int eQ;
    private static int eR;
    private static int eS;
    private static int eT = -1;
    private static char a_char_array1d_static_fld[];
    private static a d_a_array1d_static_fld[];
    private static byte a_byte_array2d_static_fld[][];
    private static byte b_byte_array2d_static_fld[][];
    private static short a_short_array2d_static_fld[][];
    private static int al_int_array1d_static_fld[];
    private static int eU = -1;
    private static int eV = -1;
    private static int eW;
    private static int eX;
    private static int eY;
    private static int eZ;
    private static int am_int_array1d_static_fld[];
    private static int an_int_array1d_static_fld[];
    private static int fa;
    private static int fb;
    private static int fc;
    private static int fd;
    private static int fe;
    private static int ff;
    private static int fg;
    private static int fh;
    private static int fi;
    private static int ao_int_array1d_static_fld[];
    private static int fj;
    private static int fk;
    private static int fl;
    private static int fm;
    private static int fn;
    private static int fo;
    private static int fp;
    private static int fq;
    private static int fr;
    private static int fs;
    private static int ft;
    private static int fu;
    private static final int fv;
    private static int fw;
    private static final int fx;
    private static final int fy;
    private static final int fz;
    private static int fA;
    private static int fB;
    private static int fC;
    private static int fD;
    private static int fE;
    private static int fF;
    private static int fG;
    private static int fH;
    private static int fI;
    private static int fJ;
    private static int fK;
    private static int fL;
    private static int fM;
    private static int fN;
    private static int fO;
    private static int fP;
    private static int fQ;
    private static int fR;
    private static boolean ac_boolean_static_fld;
    private static int fS;
    private static int fT;
    private static int fU;
    private static int fV;
    private static int fW;
    private static int fX;
    private static int fY;
    private static int fZ = 0;
    private static int ga;
    private static int gb;
    private static int gc;
    private static int gd;
    private static a l_a_static_fld;
    private static a m_a_static_fld;
    private static d n_d_array1d_static_fld[];
    private static int ge;
    private static int gf;
    private static int gg;
    private static int ap_int_array1d_static_fld[];
    private static boolean ad_boolean_static_fld;
    private static final int aq_int_array1d_static_fld[] = {
        -100, 240, 15, 2000, 100, 150, 12, 2000, -100, 80, 
        9, 2000, 100, 40, 6, 2000, -100, 20, 2, 2000, 
        45, 25, 15, 3000, 45, 25, 0, 3000, 0, 0, 
        0, 2000, 0, 0, 0, 3000, -100, 0, 15, 3000, 
        0, 25, 15, 3000, 0, 25, 0, 3000, -100, 0, 
        15, 3000, 100, 0, 15, 3000, -100, 0, 15, 3000, 
        -45, 25, 15, 3000, -45, 25, 0, 3000, -100, 0, 
        15, 3000, 100, 0, 15, 3000, -100, 0, 15, 3000, 
        45, 0, 15, 3000, 45, 0, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 3000, 
        0, 0, 15, 3000, 0, 0, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 3000, 
        -45, 0, 15, 3000, -45, 0, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 3000, 
        45, -15, 15, 3000, 45, -15, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 3000, 
        0, -15, 15, 3000, 0, -15, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 3000, 
        -45, -15, 15, 3000, -45, -15, 0, 3000, -100, 0, 
        300, 3000, 100, 0, 200, 3000, -100, 0, 100, 9999, 
        -100, 250, 15, 1200, 100, 200, 10, 1200, -100, 120, 
        7, 1200, 80, 50, 4, 1200, 5, 20, 1, 1200, 
        -100, -15, 3, 1800, 100, -15, 3, 1200, 100, 90, 
        3, 1200, -100, 90, 3, 1200, 5, 20, 1, 1200, 
        0, 350, 11, 1200, 0, -10, 11, 1200, 0, 400, 
        11, 1200, 0, -10, 4, 1600, 5, 20, 1, 2000
    };
    private static int ar_int_array1d_static_fld[];
    private static int as_int_array1d_static_fld[];
    private static int gh;
    private static int gi;
    private static int gj;
    private static int gk;
    private static int gl;
    private static int gm;
    private static int gn;
    private static boolean ae_boolean_static_fld;
    private static int go;
    private static int gp;
    private static boolean af_boolean_static_fld;
    private static int at_int_array1d_static_fld[];
    private static int au_int_array1d_static_fld[];
    private static final int av_int_array1d_static_fld[] = {
        8, 9, 10, 11, 12
    };
    private static final int aw_int_array1d_static_fld[] = {
        13, 14, 15, 16, 17
    };
    private static int ax_int_array1d_static_fld[];
    private static boolean ag_boolean_static_fld;
    private static int gq;
    private static int gr;
    private static int ay_int_array1d_static_fld[];
    private static long a_long_array1d_static_fld[];
    private static boolean ah_boolean_static_fld;
    private static c a_c_static_fld;
    private static int gs;
    private static int gt;
    private static int gu;
    private static int gv;
    private static int gw;
    private static int gx;
    private static int gy;
    private static int gz;
    private static int az_int_array1d_static_fld[] = {
        0, 5, 10, 20, 21, 22, 30, 31, 32, 33, 
        34, 35, 50, 40, 60, 61, 62, 63, 64
    };
    private static int gA;
    private static int aA_int_array1d_static_fld[] = {
        200, 50, 0, 0, 100, 200, 100, 200, 100, 200, 
        100, 200, 100, 200, 100, 200, 100, 200, 100, 200, 
        100, 100
    };
    private static int aB_int_array1d_static_fld[] = {
        200, 50, 0, 0, 100, 200, 100, 200, 100, 200, 
        100, 200, 100, 200, 100, 200, 100, 200, 100, 200, 
        100, 100
    };
    private static int aC_int_array1d_static_fld[] = {
        400, 100, 0, 0, 100, 200, 100, 200, 100, 200, 
        100, 200, 100, 200, 100, 200, 100, 200, 100, 200, 
        100, 100
    };
    private static int aD_int_array1d_static_fld[] = {
        200, 50, 0, 0, 100, 200, 100, 200, 100, 200, 
        100, 200, 100, 200, 100, 200, 100, 200, 100, 200, 
        100, 200
    };
    private static int aE_int_array1d_static_fld[];
    private static int gB;
    private static int gC;
    private static boolean ai_boolean_static_fld;
    private static boolean aj_boolean_static_fld;
    private static boolean ak_boolean_static_fld;
    private static boolean al_boolean_static_fld;

    static 
    {
        (new int[1])[0] = 0;
        int ai1[] = new int[10];
        ai1[0] = 0;
        ai1[1] = 3350;
        ai1[2] = 0;
        ai1[3] = 0;
        ai1[4] = 1;
        ai1[5] = 6;
        ai1[6] = 0;
        ai1[7] = 1;
        ai1[8] = 1;
        ai1[9] = 0;
        cC = 7;
        cE = cC;
        ez = 8;
        fc = 300 << ez;
        fd = 1600 << ez;
        fe = 100 << ez;
        ff = 100 << ez;
        fv = 150 << ez;
        fw = 150 << ez;
        fx = 10 << ez;
        fy = 45 << ez;
        fz = 115 << ez;
        fA = 800 << ez;
        fB = -1200 << ez;
        fC = 800 << ez << 1;
        fD = 1800 << ez << 1;
        fE = 150 << ez << 1;
        fF = 150 << ez << 1;
        fG = 200 << ez << 1;
        fH = 50 << ez;
        fI = 40 << ez;
        fJ = 40 << ez;
        fK = 25 << ez;
        fL = 30 << ez;
        fM = 0 << ez;
        fN = -2 << ez;
        fO = -20 << ez;
        fP = 45 << ez;
        fQ = -30 << ez;
        fR = 30 << ez;
        fY = -5 << ez;
        ga = (-fc * 11) / 10;
        gb = -ff / 2;
        gg = fc * 10;
        gh = 8 << ez;
        int ai2[] = new int[22];
        ai2[0] = 400;
        ai2[1] = 100;
        ai2[2] = 50;
        ai2[3] = 0;
        ai2[4] = 100;
        ai2[5] = 200;
        ai2[6] = 100;
        ai2[7] = 200;
        ai2[8] = 100;
        ai2[9] = 200;
        ai2[10] = 100;
        ai2[11] = 200;
        ai2[12] = 100;
        ai2[13] = 200;
        ai2[14] = 100;
        ai2[15] = 200;
        ai2[16] = 100;
        ai2[17] = 200;
        ai2[18] = 100;
        ai2[19] = 200;
        ai2[20] = 100;
        ai2[21] = 100;
    }
}
