<?php
$z[0]=Array("field","",84,103);
$z[0][4]['name']="title";
$z[1]=Array("global","",104,130);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",175,197);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",241,292);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",525,554);
$z[4][4]['name']="cfg_templeturl";
$z[5]=Array("global","",619,648);
$z[5][4]['name']="cfg_templeturl";
$z[6]=Array("global","",733,762);
$z[6][4]['name']="cfg_templeturl";
$z[7]=Array("global","",835,864);
$z[7][4]['name']="cfg_templeturl";
$z[8]=Array("global","",916,945);
$z[8][4]['name']="cfg_templeturl";
$z[9]=Array("global","",1000,1029);
$z[9][4]['name']="cfg_templeturl";
$z[10]=Array("channel","\r\n            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n            ",1269,1491);
$z[10][4]['type']="top";
$z[10][4]['currentstyle']="<li class='active'><a href='~typelink~' style='color:white;'>~typename~</a></li>";
$z[11]=Array("channel","\r\n        	<a href=\"[field:typeurl/]\" class=\"btn btn-default\">[field:typename/]</a>\r\n            ",2035,2259);
$z[11][4]['type']="son";
$z[11][4]['currentstyle']="<a href='~typelink~' class='btn btn-default btn-primary'>~typename~</a>";
$z[12]=Array("list","\r\n        	<li>\r\n              <p class=\"left\">\r\n                <span class=\"date\">[field:pubdate function=\"MyDate('d',@me)\"/]<u>[field:pubdate function='strftime(\"%b\",@me)'/]</u></span>\r\n                <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"thumb\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a>\r\n              </p>\r\n              <p class=\"right\">\r\n                <span class=\"title\"><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></span>\r\n                <span class=\"rel\">[field:pubdate runphp='yes'] \$today = Floor(time()/(3600 * 24)); \$senday= Floor(@me/(3600 * 24)); \$updays = \$today-\$senday; if(\$updays==0) @me = \"今日\"; else @me = \$updays.\"天前\"; [/field:pubdate]<u>•</u>围观热度 [field:click/]<u>•</u>[field:typelink/]</span>\r\n                <span class=\"summary\">[field:description/] . . .</span>\r\n                <span class=\"tags\">\r\n                	<span class=\"glyphicon glyphicon-tag\"></span>\r\n                    [field:id runphp='yes']\r\n                          global \$cfg_cmspath;\r\n                          \$tags = GetTags(@me);\r\n                          \$revalue = '';\r\n                          \$tags = explode(',', \$tags);\r\n                          foreach(\$tags as \$key => \$value){\r\n                          if(\$value){\r\n                              \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a>&nbsp;';\r\n                              }\r\n                          }\r\n                          @me = \$revalue;\r\n                     [/field:id] \r\n                </span>\r\n              </p>\r\n            </li>\r\n            ",2378,4043);
$z[12][4]['pagesize']="10";
$z[13]=Array("pagelist","",4161,4217);
$z[13][4]['listitem']="pre,next,pageno";
$z[13][4]['listsize']="5";

?>