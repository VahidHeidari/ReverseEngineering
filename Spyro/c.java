// Decompiled by DJ v3.12.12.96 Copyright 2011 Atanas Neshkov  Date: 1/3/2014 2:48:46 AM
// Home Page: http://members.fortunecity.com/neshkov/dj.html  http://www.neshkov.com/dj.html - Check often for new version!
// Decompiler options: packimports(3) 

import javax.microedition.lcdui.Graphics;
import javax.microedition.lcdui.Image;

public final class c
{

    public c()
    {
        a_javax_microedition_lcdui_Image_array2d_fld = new Image[18][];
    }

    public final int a(int i)
    {
        return a_javax_microedition_lcdui_Image_array2d_fld[i][0].getHeight();
    }

    public final void a(int i, int j, int k, int l, boolean flag)
    {
        k = a_byte_array1d_fld[j << 2] & 0xff;
        l = a_byte_array1d_fld[(j << 2) + 1] & 0xff;
        flag = a_byte_array1d_fld[(j << 2) + 2] & 0xff;
        int i1 = a_byte_array1d_fld[(j << 2) + 3] & 0xff;
        a_javax_microedition_lcdui_Image_array2d_fld[i] = new Image[8];
        for(int j1 = 0; j1 < 8; j1++)
        {
            int k1 = 0x40000000 / (32768 + j1 * 24576);
            int l1 = a_byte_array1d_fld[(j << 2) + 2] * k1 >> 15;
            k1 = a_byte_array1d_fld[(j << 2) + 3] * k1 >> 15;
            if(l1 == 0)
                l1 = 1;
            if(k1 == 0)
                k1 = 1;
            if(j1 > 0 && a_javax_microedition_lcdui_Image_array2d_fld[i][j1 - 1].getWidth() == l1 && a_javax_microedition_lcdui_Image_array2d_fld[i][j1 - 1].getHeight() == k1)
            {
                a_javax_microedition_lcdui_Image_array2d_fld[i][j1] = a_javax_microedition_lcdui_Image_array2d_fld[i][j1 - 1];
                continue;
            }
            int k3 = k1;
            int j3 = l1;
            int ai1[] = b;
            int i3 = i1;
            int l2 = ((flag) ? 1 : 0);
            int k2 = l;
            int j2 = k;
            int i2 = a_int_fld;
            int ai[] = a_int_array1d_fld;
            l2 = (l2 << 15) / j3;
            i3 = (i3 << 15) / k3;
            j2 = (l2 >> 1) + (j2 << 15);
            k2 = (i3 >> 1) + (k2 << 15);
            int l3 = 0;
            for(int i4 = 0; i4 < k3; i4++)
            {
                int j4 = (k2 >> 15) * i2;
                int k4 = j2;
                for(int l4 = 0; l4 < j3; l4++)
                {
                    ai1[l3 + l4] = ai[j4 + (k4 >> 15)];
                    k4 += l2;
                }

                k2 += i3;
                l3 += j3;
            }

            a_javax_microedition_lcdui_Image_array2d_fld[i][j1] = Image.createRGBImage(b, l1, k1, true);
        }

    }

    public final void a(int i, int j, int k, int l)
    {
        if(j < 1)
            return;
        for(i = (this = a_javax_microedition_lcdui_Image_array2d_fld[i]).length - 1; i > 0 && this[i].getHeight() < j; i--);
        e.a.drawImage(this[i], k, l, 17);
    }

    byte a_byte_array1d_fld[];
    int a_int_array1d_fld[];
    int b[];
    int a_int_fld;
    private Image a_javax_microedition_lcdui_Image_array2d_fld[][];
}
