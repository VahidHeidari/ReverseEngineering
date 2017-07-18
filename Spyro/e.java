// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:49:02 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import java.io.*;
import javax.microedition.lcdui.*;
import javax.microedition.lcdui.game.GameCanvas;
import javax.microedition.media.Manager;
import javax.microedition.media.Player;
import javax.microedition.rms.*;

public final class e extends GameCanvas
{

    public e()
    {
        super(false);
        setFullScreenMode(true);
        a_e_static_fld = this;
        a_javax_microedition_lcdui_Graphics_static_fld = getGraphics();
        a_int_static_fld = getWidth();
        b_int_static_fld = getHeight();
    }

    protected final void sizeChanged(int i1, int j1)
    {
        a_int_static_fld = i1;
        b_int_static_fld = j1;
        b.a(4);
    }

    protected final void showNotify()
    {
        b.a(3);
    }

    protected final void hideNotify()
    {
        b.a(1);
    }

    private static void g()
    {
        if(a_javax_microedition_media_Player_static_fld != null)
            try
            {
                a_javax_microedition_media_Player_static_fld.stop();
                a_javax_microedition_media_Player_static_fld = null;
                return;
            }
            catch(Exception _ex) { }
    }

    public static boolean a()
    {
        boolean flag;
        String as[] = Manager.getSupportedContentTypes(null);
        flag = false;
        int i1 = as.length;
        do
        {
            if(--i1 < 0)
                break;
            if(!as[i1].equals("audio/midi"))
                continue;
            flag = true;
            break;
        } while(true);
        return flag;
        JVM INSTR pop ;
        return false;
    }

    public static boolean b()
    {
        return b_boolean_static_fld;
    }

    public static void a(boolean flag)
    {
        b_boolean_static_fld = flag;
        if(!flag)
            g();
    }

    public static int a(String s)
    {
        int j1;
        int i1;
label0:
        {
            i1 = -1;
            j1 = -1;
            int k1;
label1:
            do
            {
                for(k1 = a_java_lang_String_array1d_static_fld.length; --k1 >= 0;)
                {
                    if(a_java_lang_String_array1d_static_fld[k1] != null)
                        continue label1;
                    j1 = k1;
                }

                break label0;
            } while(!a_java_lang_String_array1d_static_fld[k1].equals(s));
            i1 = k1;
        }
        if(i1 >= 0)
            return i1;
        if(j1 < 0)
            return -1;
        Object obj1;
        ((StringBuffer) (obj1 = new StringBuffer())).append('/').append(s);
        ((StringBuffer) (obj1)).append(".mid");
        Object obj = ((StringBuffer) (obj1)).toString();
        obj1 = "audio/midi";
        ((Player) (obj = Manager.createPlayer(a_e_static_fld.getClass().getResourceAsStream(((String) (obj))), ((String) (obj1))))).prefetch();
        a_javax_microedition_media_Player_array1d_static_fld[j1] = ((Player) (obj));
        a_java_lang_String_array1d_static_fld[j1] = s;
        return j1;
        JVM INSTR pop ;
        return -1;
    }

    public static void a(int i1, int j1)
    {
        if(i1 < 0 || !b_boolean_static_fld || a_javax_microedition_media_Player_array1d_static_fld[i1] == null)
            return;
        g();
        i1 = a_javax_microedition_media_Player_array1d_static_fld[i1];
        try
        {
            i1.setLoopCount(j1);
        }
        catch(Exception _ex) { }
        try
        {
            i1.start();
        }
        catch(Exception _ex) { }
        a_javax_microedition_media_Player_static_fld = i1;
    }

    public static void a(int i1)
    {
        if(i1 >= 0 && a_javax_microedition_media_Player_array1d_static_fld[i1] == a_javax_microedition_media_Player_static_fld)
            g();
    }

    public static boolean c()
    {
        boolean flag = false;
        try
        {
            flag = b.a.vibrate(0);
        }
        catch(Exception _ex) { }
        return flag;
    }

    public static boolean d()
    {
        return c_boolean_static_fld;
    }

    public static void b(boolean flag)
    {
        try
        {
            c_boolean_static_fld = flag;
            if(!flag)
                b.a.vibrate(0);
            return;
        }
        catch(Exception _ex)
        {
            return;
        }
    }

    public static void b(int i1)
    {
        try
        {
            if(c_boolean_static_fld)
                b.a.vibrate(i1);
            return;
        }
        catch(Exception _ex)
        {
            return;
        }
    }

    public static void a(byte abyte0[])
    {
        a();
        a_byte_array1d_static_fld = abyte0;
    }

    public static void c(int i1)
    {
        switch(a_byte_array1d_static_fld[i1])
        {
        case 0: // '\0'
            j = i1;
            return;

        case 1: // '\001'
            k = i1;
            l = i1;
            return;

        case 2: // '\002'
            j = i1;
            l = i1;
            break;
        }
    }

    public static void a()
    {
        j = -1;
        k = -1;
        l = -1;
        c_int_static_fld = -1;
        m = -1;
    }

    public static void b()
    {
        c_int_static_fld = m;
        m = -1;
    }

    public static int a(int i1)
    {
        if(i1 == 0)
            return j;
        if(i1 == 2)
            return l;
        else
            return k;
    }

    private static void e(int i1)
    {
        if(i1 == 0 && j >= 0)
        {
            m = j;
            return;
        }
        if(i1 == 1 && k >= 0)
        {
            m = k;
            return;
        }
        if(i1 == 2 && l >= 0)
            m = l;
    }

    public static void c()
    {
        d_int_static_fld = 0;
        e = 0;
        f = 0;
        a_boolean_static_fld = false;
        n = 0;
        o = 0;
        p = 0;
        d_boolean_static_fld = false;
    }

    protected final void keyPressed(int i1)
    {
        if(i1 != 0 && i1 != 0)
            d_boolean_static_fld = true;
        if(((this = b(i1)) & 0x40000) != 0)
            e(0);
        else
        if((this & 0x80000) != 0)
            e(1);
        else
        if((this & 0x100000) != 0)
            e(2);
        n |= this;
        p |= this;
    }

    protected final void keyReleased(int i1)
    {
        this = b(i1);
        o |= this;
    }

    protected final void keyRepeated(int i1)
    {
        this = b(i1);
        if(i1 != 0)
            d_boolean_static_fld = true;
        p |= this;
        n &= this ^ -1;
    }

    public static void d()
    {
        d_int_static_fld = n;
        e = o;
        f = p;
        a_boolean_static_fld = d_boolean_static_fld;
        n = 0;
        o = 0;
        p &= ~e;
        d_boolean_static_fld = false;
    }

    private static int b(int i1)
    {
        if(i1 == 0 || i1 == 0 || i1 == 0)
            return 0;
        if(i1 == -6 || i1 == 6)
            return 0x40000;
        if(i1 == -7 || i1 == 7)
            return 0x80000;
        if(i1 == 0 || i1 == 0)
            return 0x100000;
        int j1 = 0;
        switch(i1)
        {
        case 48: // '0'
            j1 = 2;
            break;

        case 49: // '1'
            j1 = 4;
            break;

        case 50: // '2'
            j1 = 8;
            break;

        case 51: // '3'
            j1 = 16;
            break;

        case 52: // '4'
            j1 = 32;
            break;

        case 53: // '5'
            j1 = 64;
            break;

        case 54: // '6'
            j1 = 128;
            break;

        case 55: // '7'
            j1 = 256;
            break;

        case 56: // '8'
            j1 = 512;
            break;

        case 57: // '9'
            j1 = 1024;
            break;

        case 35: // '#'
            j1 = 2048;
            break;

        case 42: // '*'
            j1 = 4096;
            break;
        }
        if(j1 == 0)
            try
            {
                switch(a_e_static_fld.getGameAction(i1))
                {
                case 2: // '\002'
                    j1 = 8192;
                    break;

                case 5: // '\005'
                    j1 = 16384;
                    break;

                case 1: // '\001'
                    j1 = 32768;
                    break;

                case 6: // '\006'
                    j1 = 0x10000;
                    break;

                case 8: // '\b'
                    j1 = 0x20000;
                    break;
                }
            }
            catch(IllegalArgumentException _ex)
            {
                j1 = 0;
            }
        return j1;
    }

    public static void a(int i1, int j1, int k1, int l1)
    {
        g = k1;
        h = l1;
        if(a_javax_microedition_lcdui_Graphics_static_fld != null)
        {
            a_javax_microedition_lcdui_Graphics_static_fld.translate(-a_javax_microedition_lcdui_Graphics_static_fld.getTranslateX() + i1, -a_javax_microedition_lcdui_Graphics_static_fld.getTranslateY() + j1);
            a_javax_microedition_lcdui_Graphics_static_fld.setClip(0, 0, k1, l1);
        }
    }

    public static void a(String s, int i1, byte abyte0[])
    {
        if((i & 2) != 0)
            a_byte_array2d_static_fld[i1] = abyte0;
        if((i & 1) == 0)
            return;
        try
        {
            RecordStore.deleteRecordStore(s);
        }
        // Misplaced declaration of an exception variable
        catch(int i1) { }
        if(abyte0 == null)
        {
            return;
        } else
        {
            (i1 = RecordStore.openRecordStore(s, true)).addRecord(abyte0, 0, abyte0.length);
            i1.closeRecordStore();
            return;
        }
    }

    public static byte[] a(String s, int i1)
    {
        byte abyte0[];
        if((i & 8) != 0 && (abyte0 = a_byte_array2d_static_fld[i1]) != null)
            return abyte0;
        if((i & 4) == 0)
            return null;
        RecordStore recordstore;
        s = (recordstore = RecordStore.openRecordStore(s, false)).getRecord(1);
        recordstore.closeRecordStore();
        if((i & 2) != 0)
            a_byte_array2d_static_fld[i1] = s;
        return s;
    }

    public static int a(DataInputStream datainputstream)
    {
        int i1 = datainputstream.readUnsignedByte();
        int j1 = -1;
        switch(i1)
        {
        case 2: // '\002'
            j1 = datainputstream.readUnsignedShort();
            break;

        case 1: // '\001'
            j1 = datainputstream.readUnsignedByte();
            break;

        case 4: // '\004'
            j1 = datainputstream.readInt();
            break;
        }
        return j1;
    }

    public static void a(String s)
    {
        if(s.indexOf('/') != 0)
            s = "/" + s;
        DataInputStream datainputstream;
        s = (datainputstream = new DataInputStream(a_e_static_fld.getClass().getResourceAsStream(s))).readInt();
        if(datainputstream.markSupported())
        {
            datainputstream.mark(65535);
            a_java_io_DataInputStream_static_fld = datainputstream;
            return;
        } else
        {
            s = new byte[s];
            datainputstream.readFully(s);
            datainputstream.close();
            a_java_io_DataInputStream_static_fld = new DataInputStream(new ByteArrayInputStream(s));
            return;
        }
    }

    public static void e()
    {
        if(a_java_io_DataInputStream_static_fld != null)
            try
            {
                a_java_io_DataInputStream_static_fld.close();
                a_java_io_DataInputStream_static_fld = null;
                return;
            }
            catch(Exception _ex) { }
    }

    public static DataInputStream a(String s)
    {
        if(s.indexOf('/') != 0)
            s = "/" + s;
        return new DataInputStream(a_e_static_fld.getClass().getResourceAsStream(s));
    }

    public static DataInputStream a(int i1)
    {
        DataInputStream datainputstream = null;
        q = -1;
        i1 &= 0xfff;
        a_java_io_DataInputStream_static_fld.reset();
        int j1 = a_java_io_DataInputStream_static_fld.readInt();
        int k1 = a_java_io_DataInputStream_static_fld.readInt();
        if(i1 < k1)
        {
            a_java_io_DataInputStream_static_fld.skipBytes(i1 << 3);
            a_java_io_DataInputStream_static_fld.readInt();
            q = a_java_io_DataInputStream_static_fld.readInt() + j1 + 8;
        }
        if(q >= 0)
        {
            a_java_io_DataInputStream_static_fld.reset();
            a_java_io_DataInputStream_static_fld.skipBytes(q);
            datainputstream = a_java_io_DataInputStream_static_fld;
        }
        return datainputstream;
    }

    public static byte[] a(String s)
    {
        if(s.indexOf('/') != 0)
            s = "/" + s;
        byte abyte0[] = null;
        if((s = a_e_static_fld.getClass().getResourceAsStream(s)) != null)
        {
            ByteArrayOutputStream bytearrayoutputstream = new ByteArrayOutputStream(1024);
            while((abyte0 = s.read()) >= 0) 
                bytearrayoutputstream.write(abyte0);
            s.close();
            abyte0 = bytearrayoutputstream.toByteArray();
            bytearrayoutputstream.close();
        }
        return abyte0;
    }

    public static Image a(String s)
    {
        String s1 = s = s;
        if(s.indexOf('/') != 0)
            s1 = "/" + s;
        return Image.createImage(s1);
    }

    public static int b(String s)
    {
        int i1 = 0;
        (s = a(s)).skipBytes(33);
        boolean flag = false;
        do
        {
            int j1 = s.readInt();
            if(s.readInt() == 0x504c5445)
            {
                i1 = s.readInt() >>> 8;
                flag = true;
            } else
            {
                s.skipBytes(j1 + 4);
            }
        } while(!flag);
        s.close();
        return i1;
    }

    public static void f()
    {
        a_int_array1d_static_fld = new int[a_int_static_fld];
    }

    public static void d(int i1)
    {
        if(r != i1)
        {
            r = i1;
            int ai[];
            for(int j1 = (ai = a_int_array1d_static_fld).length - 1; j1 >= 0; j1--)
                ai[j1] = i1;

        }
    }

    public static void a(int i1, int j1, int k1)
    {
        while(--k1 >= 0) 
            a_javax_microedition_lcdui_Graphics_static_fld.drawRGB(a_int_array1d_static_fld, 0, a_int_array1d_static_fld.length, 0, i1 + k1, j1, 1, true);
    }

    public static e a_e_static_fld;
    public static Graphics a_javax_microedition_lcdui_Graphics_static_fld;
    public static int a_int_static_fld;
    public static int b_int_static_fld;
    private static boolean b_boolean_static_fld = true;
    private static Player a_javax_microedition_media_Player_array1d_static_fld[] = new Player[8];
    private static String a_java_lang_String_array1d_static_fld[] = new String[8];
    private static Player a_javax_microedition_media_Player_static_fld;
    private static boolean c_boolean_static_fld = true;
    private static byte a_byte_array1d_static_fld[];
    private static int j = -1;
    private static int k = -1;
    private static int l = -1;
    public static int c_int_static_fld = -1;
    private static int m = -1;
    public static int d_int_static_fld;
    public static int e;
    public static int f;
    public static boolean a_boolean_static_fld;
    private static int n;
    private static int o;
    private static int p;
    private static boolean d_boolean_static_fld;
    public static int g;
    public static int h;
    private static final byte a_byte_array2d_static_fld[][] = new byte[3][];
    public static int i = 15;
    private static int q;
    private static DataInputStream a_java_io_DataInputStream_static_fld;
    private static int a_int_array1d_static_fld[];
    private static int r;

    static 
    {
        byte abyte0[] = new byte[8];
        abyte0[0] = -119;
        abyte0[1] = 80;
        abyte0[2] = 78;
        abyte0[3] = 71;
        abyte0[4] = 13;
        abyte0[5] = 10;
        abyte0[6] = 26;
        abyte0[7] = 10;
        byte abyte1[] = new byte[12];
        abyte1[0] = 0;
        abyte1[1] = 0;
        abyte1[2] = 0;
        abyte1[3] = 0;
        abyte1[4] = 73;
        abyte1[5] = 69;
        abyte1[6] = 78;
        abyte1[7] = 68;
        abyte1[8] = -82;
        abyte1[9] = 66;
        abyte1[10] = 96;
        abyte1[11] = -126;
        byte abyte2[] = new byte[13];
        abyte2[0] = 0;
        abyte2[1] = 0;
        abyte2[2] = 0;
        abyte2[3] = 1;
        abyte2[4] = 116;
        abyte2[5] = 82;
        abyte2[6] = 78;
        abyte2[7] = 83;
        abyte2[8] = 0;
        abyte2[9] = 64;
        abyte2[10] = -26;
        abyte2[11] = -40;
        abyte2[12] = 102;
    }
}
