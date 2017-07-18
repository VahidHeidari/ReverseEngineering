// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:47:59 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import javax.microedition.lcdui.Graphics;
import javax.microedition.lcdui.Image;

public final class a
{

    public a()
    {
    }

    public final int a(int i)
    {
        return a_int_array1d_fld[i] >>> 8 & 0xff;
    }

    public final int b(int i)
    {
        return a_int_array1d_fld[i] & 0xff;
    }

    public final void a(int i, int j, int k)
    {
        int j1;
        i = (j1 = a_int_array1d_fld[i]) & 0xff;
        int l = (j1 >>>= 8) & 0xff;
        int i1 = (j1 >>>= 8) & 0xff;
        j1 = j1 >>> 8 & 0xff;
        Graphics g;
        (g = e.a).clipRect(j, k, l, i);
        j -= j1;
        k -= i1;
        g.drawImage(a_javax_microedition_lcdui_Image_fld, j, k, 20);
        g.setClip(0, 0, e.g, e.h);
    }

    Image a_javax_microedition_lcdui_Image_fld;
    int a_int_array1d_fld[];
    public int a_int_fld;
}
