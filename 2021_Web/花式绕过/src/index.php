<?php
    error_reporting(0);
    $ctf = $_GET['ctf'];
    if(isset($ctf)){
        if(!preg_match('/cat|more|less|head|tail|tac|vi|vim|nl|sort|od|flag|[0-9]| |\;|\*|\+|\-|\`|\'|\"|\^|\/|\\\/i', $ctf)){
            system($ctf);
        }else{
            echo "you are Hacker!";
        }
    }else{
        highlight_file(__FILE__);
    }
?>
