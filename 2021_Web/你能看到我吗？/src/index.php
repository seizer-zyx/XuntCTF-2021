<?php
    error_reporting(0);
    $ctf = $_POST['ctf'];
    $black_list = ['flag','hint'];
    if(isset($ctf)){
        $ctf = str_replace($black_list, '', $ctf);     //hint.php
        include($ctf);
    }else{
        highlight_file(__FILE__);
    }
?>
