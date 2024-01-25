import java .awt.*;
import java .applet.*;

public class question1 extends Applet {
    public void init()
    {
        Checkbox ch1 =new Checkbox("Marath");
        Checkbox ch2 =new Checkbox("Hindi");
        Checkbox ch3 =new Checkbox("English");

        CheckboxGroup chkgrp = new CheckboxGroup();

        Checkbox chkRed,chkBlue,chkYellow,chkGreen;

        chkRed =new Checkbox("Red",chkgrp,false);
        chkBlue =new Checkbox("Blue",chkgrp,false);
        chkYellow =new Checkbox("Yellow",chkgrp,false);
        chkGreen =new Checkbox("Green",chkgrp,false);
       

        add(chkRed);
        add(chkBlue);
        add(chkYellow);
        add(chkGreen);

        add(ch1);
        add(ch2);
        add(ch3);

    }
}
