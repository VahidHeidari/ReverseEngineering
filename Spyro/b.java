// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:48:35 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import javax.microedition.lcdui.Display;
import javax.microedition.midlet.MIDlet;

public abstract class b extends MIDlet
    implements Runnable
{

    public b()
    {
        a_b_static_fld = this;
        c_int_static_fld = 0;
    }

    protected final void startApp()
    {
        a(2);
    }

    protected final void destroyApp(boolean flag)
    {
        a_boolean_static_fld = true;
    }

    protected final void pauseApp()
    {
        a(0);
    }

    public final void run()
    {
        b_long_static_fld = System.currentTimeMillis();
        do
        {
            if(a_boolean_static_fld)
                break;
            a_int_static_fld = (int)((a_long_static_fld = System.currentTimeMillis()) - b_long_static_fld);
            b_long_static_fld = a_long_static_fld;
            if(c_int_static_fld == 0)
            {
                a();
                c_int_static_fld = 1;
            } else
            if(c_int_static_fld == 1)
            {
                if(c_boolean_static_fld)
                {
                    a_b_static_fld.d();
                    c_boolean_static_fld = false;
                }
                if(d)
                {
                    a_b_static_fld.b();
                    d = false;
                }
                if(b_boolean_static_fld)
                {
                    a_b_static_fld.c();
                    b_boolean_static_fld = false;
                }
                if((b_int_static_fld = a_int_static_fld) > 100)
                    b_int_static_fld = 100;
                else
                if(b_int_static_fld < 40)
                    b_int_static_fld = 40;
                e.d();
                e.b();
                e();
                f();
                e.a.flushGraphics();
                g();
                try
                {
                    Thread.sleep(10L);
                }
                catch(InterruptedException interruptedexception) { }
                long l;
                if((l = 40L - (System.currentTimeMillis() - a_long_static_fld)) > 0L)
                    try
                    {
                        Thread.sleep(l);
                    }
                    catch(InterruptedException _ex) { }
            } else
            if(c_int_static_fld == 2)
            {
                try
                {
                    Thread.sleep(500L);
                }
                catch(InterruptedException _ex) { }
                if(b_boolean_static_fld)
                {
                    a_b_static_fld.c();
                    b_boolean_static_fld = false;
                    c_int_static_fld = 1;
                }
            }
        } while(true);
        c_int_static_fld = 3;
        a_javax_microedition_lcdui_Display_static_fld = null;
        notifyDestroyed();
    }

    public static final void a(int i)
    {
        if(i == 4)
            c_boolean_static_fld = true;
        c_int_static_fld;
        JVM INSTR tableswitch 0 2: default 141
    //                   0 40
    //                   1 89
    //                   2 127;
           goto _L1 _L2 _L3 _L4
_L1:
        break; /* Loop/switch isn't completed */
_L2:
        if(i == 2 && a_javax_microedition_lcdui_Display_static_fld == null)
        {
            a_javax_microedition_lcdui_Display_static_fld = Display.getDisplay(a_b_static_fld);
            new e();
            a_javax_microedition_lcdui_Display_static_fld.setCurrent(e.a);
            (new Thread(a_b_static_fld)).start();
            return;
        }
        break; /* Loop/switch isn't completed */
_L3:
        if(i == 0 || i == 1)
        {
            a_b_static_fld.b();
            c_int_static_fld = 2;
            return;
        }
        if(i != 5 && i != 6)
            break; /* Loop/switch isn't completed */
        d = true;
          goto _L5
_L4:
        if(i != 2 && i != 3)
            break; /* Loop/switch isn't completed */
_L5:
        b_boolean_static_fld = true;
    }

    protected abstract void a();

    protected abstract void b();

    protected abstract void c();

    protected abstract void d();

    protected abstract void e();

    protected abstract void f();

    protected abstract void g();

    public static b a_b_static_fld;
    private static int c_int_static_fld;
    static boolean a_boolean_static_fld;
    private static boolean b_boolean_static_fld;
    private static boolean c_boolean_static_fld;
    private static boolean d;
    private static long a_long_static_fld;
    private static long b_long_static_fld;
    public static int a_int_static_fld;
    public static int b_int_static_fld;
    public static Display a_javax_microedition_lcdui_Display_static_fld;
}
