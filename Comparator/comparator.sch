<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3a" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="input_A" />
        <signal name="input_B" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="input_C" />
        <signal name="input_D" />
        <signal name="XLXN_21" />
        <signal name="XLXN_22" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29" />
        <signal name="XLXN_30" />
        <signal name="XLXN_31" />
        <signal name="XLXN_32" />
        <signal name="XLXN_33" />
        <signal name="output_EQ" />
        <signal name="output_GT" />
        <signal name="output_LT" />
        <port polarity="Input" name="input_A" />
        <port polarity="Input" name="input_B" />
        <port polarity="Input" name="input_C" />
        <port polarity="Input" name="input_D" />
        <port polarity="Output" name="output_EQ" />
        <port polarity="Output" name="output_GT" />
        <port polarity="Output" name="output_LT" />
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="xnor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
            <circle r="8" cx="220" cy="-96" />
            <line x2="256" y1="-96" y2="-96" x1="228" />
            <line x2="60" y1="-28" y2="-28" x1="60" />
        </blockdef>
        <blockdef name="or3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="72" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
        </blockdef>
        <block symbolname="inv" name="XLXI_4">
            <blockpin signalname="input_A" name="I" />
            <blockpin signalname="XLXN_25" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_5">
            <blockpin signalname="input_B" name="I" />
            <blockpin signalname="XLXN_27" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_6">
            <blockpin signalname="input_C" name="I" />
            <blockpin signalname="XLXN_23" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_7">
            <blockpin signalname="input_D" name="I" />
            <blockpin signalname="XLXN_24" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_8">
            <blockpin signalname="input_D" name="I0" />
            <blockpin signalname="input_C" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_32" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_9">
            <blockpin signalname="input_D" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_33" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_10">
            <blockpin signalname="input_C" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_31" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_11">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_23" name="I1" />
            <blockpin signalname="input_B" name="I2" />
            <blockpin signalname="XLXN_30" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_12">
            <blockpin signalname="XLXN_23" name="I0" />
            <blockpin signalname="input_A" name="I1" />
            <blockpin signalname="XLXN_28" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_13">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="input_B" name="I1" />
            <blockpin signalname="input_A" name="I2" />
            <blockpin signalname="XLXN_29" name="O" />
        </block>
        <block symbolname="xnor2" name="XLXI_14">
            <blockpin signalname="input_C" name="I0" />
            <blockpin signalname="input_A" name="I1" />
            <blockpin signalname="XLXN_21" name="O" />
        </block>
        <block symbolname="xnor2" name="XLXI_15">
            <blockpin signalname="input_D" name="I0" />
            <blockpin signalname="input_B" name="I1" />
            <blockpin signalname="XLXN_22" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_16">
            <blockpin signalname="XLXN_22" name="I0" />
            <blockpin signalname="XLXN_21" name="I1" />
            <blockpin signalname="output_EQ" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_17">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_30" name="I2" />
            <blockpin signalname="output_GT" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_18">
            <blockpin signalname="XLXN_32" name="I0" />
            <blockpin signalname="XLXN_31" name="I1" />
            <blockpin signalname="XLXN_33" name="I2" />
            <blockpin signalname="output_LT" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="880" y="832" name="XLXI_5" orien="R0" />
        <instance x="880" y="672" name="XLXI_4" orien="R0" />
        <instance x="880" y="992" name="XLXI_6" orien="R0" />
        <instance x="880" y="1152" name="XLXI_7" orien="R0" />
        <branch name="input_A">
            <wire x2="800" y1="640" y2="640" x1="640" />
            <wire x2="880" y1="640" y2="640" x1="800" />
            <wire x2="800" y1="640" y2="720" x1="800" />
            <wire x2="1600" y1="720" y2="720" x1="800" />
            <wire x2="1680" y1="720" y2="720" x1="1600" />
            <wire x2="1600" y1="720" y2="1248" x1="1600" />
            <wire x2="1680" y1="1248" y2="1248" x1="1600" />
            <wire x2="1600" y1="1248" y2="1392" x1="1600" />
            <wire x2="1680" y1="1392" y2="1392" x1="1600" />
        </branch>
        <branch name="input_B">
            <wire x2="800" y1="800" y2="800" x1="640" />
            <wire x2="880" y1="800" y2="800" x1="800" />
            <wire x2="800" y1="800" y2="880" x1="800" />
            <wire x2="1440" y1="880" y2="880" x1="800" />
            <wire x2="1680" y1="880" y2="880" x1="1440" />
            <wire x2="1440" y1="880" y2="1040" x1="1440" />
            <wire x2="1680" y1="1040" y2="1040" x1="1440" />
            <wire x2="1440" y1="1040" y2="1456" x1="1440" />
            <wire x2="1680" y1="1456" y2="1456" x1="1440" />
        </branch>
        <branch name="input_C">
            <wire x2="800" y1="960" y2="960" x1="640" />
            <wire x2="880" y1="960" y2="960" x1="800" />
            <wire x2="800" y1="960" y2="1040" x1="800" />
            <wire x2="1280" y1="1040" y2="1040" x1="800" />
            <wire x2="1280" y1="784" y2="1040" x1="1280" />
            <wire x2="1472" y1="784" y2="784" x1="1280" />
            <wire x2="1680" y1="784" y2="784" x1="1472" />
            <wire x2="1472" y1="384" y2="528" x1="1472" />
            <wire x2="1472" y1="528" y2="784" x1="1472" />
            <wire x2="1680" y1="528" y2="528" x1="1472" />
            <wire x2="1680" y1="384" y2="384" x1="1472" />
        </branch>
        <branch name="input_D">
            <wire x2="800" y1="1120" y2="1120" x1="640" />
            <wire x2="880" y1="1120" y2="1120" x1="800" />
            <wire x2="800" y1="1120" y2="1200" x1="800" />
            <wire x2="1104" y1="1200" y2="1200" x1="800" />
            <wire x2="1216" y1="1200" y2="1200" x1="1104" />
            <wire x2="1216" y1="944" y2="1200" x1="1216" />
            <wire x2="1568" y1="944" y2="944" x1="1216" />
            <wire x2="1680" y1="944" y2="944" x1="1568" />
            <wire x2="1568" y1="240" y2="592" x1="1568" />
            <wire x2="1568" y1="592" y2="944" x1="1568" />
            <wire x2="1680" y1="592" y2="592" x1="1568" />
            <wire x2="1680" y1="240" y2="240" x1="1568" />
        </branch>
        <iomarker fontsize="28" x="640" y="640" name="input_A" orien="R180" />
        <iomarker fontsize="28" x="640" y="800" name="input_B" orien="R180" />
        <iomarker fontsize="28" x="640" y="960" name="input_C" orien="R180" />
        <iomarker fontsize="28" x="640" y="1120" name="input_D" orien="R180" />
        <instance x="1680" y="304" name="XLXI_9" orien="R0" />
        <instance x="1680" y="448" name="XLXI_10" orien="R0" />
        <instance x="1680" y="656" name="XLXI_8" orien="R0" />
        <instance x="1680" y="1232" name="XLXI_11" orien="R0" />
        <instance x="1680" y="1584" name="XLXI_13" orien="R0" />
        <instance x="1680" y="848" name="XLXI_14" orien="R0" />
        <instance x="1680" y="1008" name="XLXI_15" orien="R0" />
        <instance x="1680" y="1376" name="XLXI_12" orien="R0" />
        <instance x="2064" y="912" name="XLXI_16" orien="R0" />
        <branch name="XLXN_21">
            <wire x2="2000" y1="752" y2="752" x1="1936" />
            <wire x2="2000" y1="752" y2="784" x1="2000" />
            <wire x2="2064" y1="784" y2="784" x1="2000" />
        </branch>
        <branch name="XLXN_22">
            <wire x2="2000" y1="912" y2="912" x1="1936" />
            <wire x2="2000" y1="848" y2="912" x1="2000" />
            <wire x2="2064" y1="848" y2="848" x1="2000" />
        </branch>
        <branch name="XLXN_23">
            <wire x2="1520" y1="960" y2="960" x1="1104" />
            <wire x2="1520" y1="960" y2="1104" x1="1520" />
            <wire x2="1680" y1="1104" y2="1104" x1="1520" />
            <wire x2="1520" y1="1104" y2="1312" x1="1520" />
            <wire x2="1680" y1="1312" y2="1312" x1="1520" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="1360" y1="1120" y2="1120" x1="1104" />
            <wire x2="1360" y1="1120" y2="1168" x1="1360" />
            <wire x2="1680" y1="1168" y2="1168" x1="1360" />
            <wire x2="1360" y1="1168" y2="1520" x1="1360" />
            <wire x2="1680" y1="1520" y2="1520" x1="1360" />
        </branch>
        <branch name="XLXN_25">
            <wire x2="1360" y1="640" y2="640" x1="1104" />
            <wire x2="1376" y1="640" y2="640" x1="1360" />
            <wire x2="1376" y1="112" y2="128" x1="1376" />
            <wire x2="1376" y1="128" y2="320" x1="1376" />
            <wire x2="1376" y1="320" y2="640" x1="1376" />
            <wire x2="1680" y1="320" y2="320" x1="1376" />
            <wire x2="1680" y1="112" y2="112" x1="1376" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="1520" y1="800" y2="800" x1="1104" />
            <wire x2="1520" y1="176" y2="288" x1="1520" />
            <wire x2="1520" y1="288" y2="464" x1="1520" />
            <wire x2="1520" y1="464" y2="800" x1="1520" />
            <wire x2="1680" y1="464" y2="464" x1="1520" />
            <wire x2="1680" y1="176" y2="176" x1="1520" />
        </branch>
        <instance x="2144" y="1408" name="XLXI_17" orien="R0" />
        <instance x="2080" y="480" name="XLXI_18" orien="R0" />
        <branch name="XLXN_28">
            <wire x2="2144" y1="1280" y2="1280" x1="1936" />
        </branch>
        <branch name="XLXN_29">
            <wire x2="2000" y1="1456" y2="1456" x1="1936" />
            <wire x2="2000" y1="1344" y2="1456" x1="2000" />
            <wire x2="2144" y1="1344" y2="1344" x1="2000" />
        </branch>
        <branch name="XLXN_30">
            <wire x2="2000" y1="1104" y2="1104" x1="1936" />
            <wire x2="2000" y1="1104" y2="1216" x1="2000" />
            <wire x2="2144" y1="1216" y2="1216" x1="2000" />
        </branch>
        <branch name="XLXN_31">
            <wire x2="2080" y1="352" y2="352" x1="1936" />
        </branch>
        <branch name="XLXN_32">
            <wire x2="2016" y1="528" y2="528" x1="1936" />
            <wire x2="2016" y1="416" y2="528" x1="2016" />
            <wire x2="2080" y1="416" y2="416" x1="2016" />
        </branch>
        <branch name="XLXN_33">
            <wire x2="2016" y1="176" y2="176" x1="1936" />
            <wire x2="2016" y1="176" y2="288" x1="2016" />
            <wire x2="2080" y1="288" y2="288" x1="2016" />
        </branch>
        <branch name="output_EQ">
            <wire x2="2352" y1="816" y2="816" x1="2320" />
        </branch>
        <iomarker fontsize="28" x="2352" y="816" name="output_EQ" orien="R0" />
        <branch name="output_GT">
            <wire x2="2432" y1="1280" y2="1280" x1="2400" />
        </branch>
        <iomarker fontsize="28" x="2432" y="1280" name="output_GT" orien="R0" />
        <branch name="output_LT">
            <wire x2="2368" y1="352" y2="352" x1="2336" />
        </branch>
        <iomarker fontsize="28" x="2368" y="352" name="output_LT" orien="R0" />
    </sheet>
</drawing>