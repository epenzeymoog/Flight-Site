package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class Slider
{
    static void debug_log(Object message)
    {
        android.util.Log.d("flight_site", (message==null ? "null" : message.toString()));
    }

    public static void AddChangedCallback123(final Object _this, final Object handle)
    {
        ((android.widget.SeekBar)handle).setOnSeekBarChangeListener(new android.widget.SeekBar.OnSeekBarChangeListener() {
        				public void onProgressChanged(android.widget.SeekBar seekBar, int progress, boolean fromUser) {
        					ExternedBlockHost.callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged124(_this,progress / 1000.0);
        				}
        				public void onStartTrackingTouch(android.widget.SeekBar seekBar) { }
        				public void onStopTrackingTouch(android.widget.SeekBar seekBar) { }
        			});
    }
    
    public static Object Create125()
    {
        android.widget.SeekBar seekBar = new android.widget.SeekBar(com.apps.flight_site.flight_site.GetRootActivity());
        			seekBar.setMax(1000);
        			return seekBar;
    }
    
    public static void SetProgress126(final Object handle,final double progress)
    {
        ((android.widget.SeekBar)handle).setProgress( (int)(progress * 1000.0) );
    }
    
}
