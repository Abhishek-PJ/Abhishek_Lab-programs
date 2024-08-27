#Develop a PHP program and check message passing mechanism between pages.

//First page code Firstpage.php
<!DOCTYPE html>
<html>
<head>
</head>
<body>
    <h1>First Page</h1>
    <?php
    $item = "Computer";
    $model = "Latitude 5420";
    $price = "900";

    echo "<a href='secondpage.php?i=$item'>Go To Next Page</a>";
    ?>
</body>
</html>

//Second page code Second.php
<!DOCTYPE html>
<html>
<head>
</head>
<body>
    <h1>Second Page</h1>
    <?php
    if (isset($_GET['i'])) {
        $item = $_GET['i'];
        echo "<h2>Your $item</h2>";
    }
    ?>
</body>
</html>
