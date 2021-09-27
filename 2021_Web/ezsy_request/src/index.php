<?php
	echo "<h1>请用GET方式提交一个名为a,值为1的变量</h1>";
	if($_GET['a']==1){
		echo "<h2>请再以POST方式随便提交一个名为b,值为2的变量</h2>";
		if($_POST['b']==2){
			echo "flag{We1c0me_T0_xiyoUn1t!}";		
		}
	}
?>
