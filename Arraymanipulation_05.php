//Write a PHP program to illustrate built in Array manipulation functions.(any 6)
<!DOCTYPE html>
<html>
<head>
    <title>Array Manipulation Functions</title>
</head>
<body>
    <h1>Array Manipulation Functions in PHP</h1>

    <?php
    // 1. array_push() - Adds elements to the end of an array
    $array1 = ["Apple", "Banana", "Cherry"];
    array_push($array1, "Date", "Elderberry");
    echo "<h2>array_push()</h2>";
    echo "Array after pushing elements: ";
    print_r($array1);

    echo "<br><br>";

    // 2. array_pop() - Removes the last element from an array
    $poppedElement = array_pop($array1);
    echo "<h2>array_pop()</h2>";
    echo "Array after popping the last element: ";
    print_r($array1);
    echo "<br>Popped element: $poppedElement";

    echo "<br><br>";

    // 3. array_shift() - Removes the first element from an array
    $shiftedElement = array_shift($array1);
    echo "<h2>array_shift()</h2>";
    echo "Array after shifting (removing the first element): ";
    print_r($array1);
    echo "<br>Shifted element: $shiftedElement";

    echo "<br><br>";

    // 4. array_unshift() - Adds elements to the beginning of an array
    array_unshift($array1, "Fig", "Grape");
    echo "<h2>array_unshift()</h2>";
    echo "Array after unshifting (adding elements to the beginning): ";
    print_r($array1);

    echo "<br><br>";

    // 5. array_merge() - Merges one or more arrays
    $array2 = ["Honeydew", "Kiwi"];
    $mergedArray = array_merge($array1, $array2);
    echo "<h2>array_merge()</h2>";
    echo "Array after merging: ";
    print_r($mergedArray);

    echo "<br><br>";

    // 6. array_reverse() - Reverses the order of elements in an array
    $reversedArray = array_reverse($mergedArray);
    echo "<h2>array_reverse()</h2>";
    echo "Array after reversing: ";
    print_r($reversedArray);
    ?>
</body>
</html>
