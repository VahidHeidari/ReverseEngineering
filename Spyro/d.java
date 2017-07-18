// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:48:54 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import java.io.DataInputStream;
import java.io.IOException;

public final class d
{

    public d(int i, int j, int k)
    {
        g = j;
        int l = j * 3;
        if(i != j)
        {
            k |= 0x10;
            l += i;
        }
        a_byte_array1d_fld = new byte[l];
        a_short_array1d_fld = new short[i];
        e = k;
    }

    public final void a(a a1)
    {
        int i = 0;
        int j = 0;
        int k = 0;
        int l = 0;
        boolean flag = false;
        int k1;
        int i1 = k1 = -a_byte_array1d_fld[1];
        int l1;
        int j1 = l1 = -a_byte_array1d_fld[2];
        for(int j2 = 0; j2 <= g - 1; j2++)
        {
            int i2 = j2 * 3;
            int l2 = a_byte_array1d_fld[i2];
            int k2 = -a_byte_array1d_fld[i2 + 1];
            i2 = -a_byte_array1d_fld[i2 + 2];
            int i3 = a1.a(l2);
            l2 = a1.b(l2);
            int j3 = k2;
            int k3 = i2;
            k2 += i3;
            i2 += l2;
            if(j3 < i1)
                i1 = j3;
            if(k3 < j1)
                j1 = k3;
            if(k2 > k1)
                k1 = k2;
            if(i2 > l1)
                l1 = i2;
            i2 = i1;
            k2 = j1;
            l2 = k1;
            i3 = l1;
            if(j2 == 0)
            {
                i = i2;
                k = k2;
                j = l2;
                l = i3;
                continue;
            }
            if(i2 < i)
                i = i2;
            if(k2 < k)
                k = k2;
            if(l2 > j)
                j = l2;
            if(i3 > l)
                l = i3;
        }

        a_int_static_fld = i;
        c = k;
        b = j;
        d = l;
    }

    public final void a(int i, int j, int k, int l, int i1, int j1)
    {
        int k1 = j * 3;
        a_byte_array1d_fld[k1++] = (byte)k;
        a_byte_array1d_fld[k1++] = (byte)i1;
        a_byte_array1d_fld[k1] = (byte)j1;
        if((e & 0x10) != 0)
        {
            k = a_byte_array1d_fld.length - a_short_array1d_fld.length;
            a_byte_array1d_fld[k + i] = (byte)j;
        }
        if(a_short_array1d_fld[i] == 0)
        {
            a_short_array1d_fld[i] = (short)(i != 0 ? a_short_array1d_fld[i - 1] + l : l);
            f += l;
        }
    }

    public final int a(int i, int j)
    {
        int k = i & 3;
        int l = (i & 0xfffc) >>> 2;
        i >>>= 16;
        switch(k)
        {
        case 1: // '\001'
            i += j;
            break;

        case 2: // '\002'
            i -= j;
            break;
        }
        switch(e & 0xffffffef)
        {
        case 0: // '\0'
            if(i >= f || i <= 0)
                k = 0;
            break;

        case 1: // '\001'
            if(i >= f)
            {
                i -= f;
                l = 0;
            }
            break;

        case 2: // '\002'
            if(i < 0)
                k = 1;
            else
            if(i >= f)
                k = 2;
            break;
        }
        switch(k)
        {
        default:
            break;

        case 1: // '\001'
            for(j = a_short_array1d_fld.length - 1; l < j && i >= a_short_array1d_fld[l]; l++);
            break;

        case 2: // '\002'
            for(; l > 0 && i < a_short_array1d_fld[l - 1]; l--);
            break;
        }
        return i << 16 | l << 2 | k;
    }

    public final void a(int i, a a1, int j, int k, int l)
    {
        int i1 = i = (i & 0xfffc) >>> 2;
        if((e & 0x10) != 0)
        {
            int j1 = (a_byte_array1d_fld.length - a_short_array1d_fld.length) + i;
            if(i != 0)
                i = (a_byte_array1d_fld[j1 - 1] & 0xff) + 1;
            i1 = a_byte_array1d_fld[j1] & 0xff;
        }
        i += i << 1;
        i1 += i1 << 1;
        if(l == 4)
        {
            int k1 = a1.a >> 1;
            for(; i <= i1; i += 3)
            {
                l = a_byte_array1d_fld[i] + k1;
                a1.a(l, (j + a_byte_array1d_fld[i + 1]) - a1.a(l), k - a_byte_array1d_fld[i + 2]);
            }

            return;
        }
        for(; i <= i1; i += 3)
            a1.a(a_byte_array1d_fld[i], j - a_byte_array1d_fld[i + 1], k - a_byte_array1d_fld[i + 2]);

    }

    public static d a(int i, int j)
    {
        d d1 = null;
        (i = e.a(i)).readBoolean();
        int l = i.readUnsignedByte();
        int k = i.readUnsignedByte();
        k = new d(l, k, j);
        j = 0;
        for(int i1 = 0; i1 < l; i1++)
        {
            short word0 = i.readShort();
            int j1 = i.readUnsignedByte();
            for(int k1 = 0; k1 < j1; k1++)
            {
                int l1 = i.readUnsignedByte();
                byte byte0 = i.readByte();
                byte byte1 = i.readByte();
                k.a(i1, j, l1, word0, byte0, byte1);
                j++;
            }

        }

        return k;
    }

    private byte a_byte_array1d_fld[];
    private short a_short_array1d_fld[];
    private int e;
    private int f;
    private int g;
    public static int a_int_static_fld = 0;
    public static int b = 0;
    public static int c = 0;
    public static int d = 0;

}
