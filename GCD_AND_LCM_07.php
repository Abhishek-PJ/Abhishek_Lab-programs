//Write a PHP program that accepts two numbers using a web form and calculates greatest common divisor (GCD) and least common multiple (LCM) of entered numbers.(Use recursive function)
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>GCD and LCM Calculator</title>
</head>
<body>
    <h1>GCD and LCM Calculator</h1>
    <form action="" method="post">
        <label for="number1">Number 1:</label>
        <input type="number" id="number1" name="number1" required>
        <br><br>
        <label for="number2">Number 2:</label>
        <input type="number" id="number2" name="number2" required>
        <br><br>
        <input type="submit" value="Calculate">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Get numbers from the form
        $num1 = (int)$_POST['number1'];
        $num2 = (int)$_POST['number2'];

        // Function to calculate GCD using recursion
        function gcd($a, $b) {
            if ($b == 0) {
                return $a;
            }
            return gcd($b, $a % $b);
        }

        // Function to calculate LCM using the GCD
        function lcm($a, $b) {
            return ($a * $b) / gcd($a, $b);
        }

        // Calculate GCD and LCM
        $gcd = gcd($num1, $num2);
        $lcm = lcm($num1, $num2);

        // Display the results
        echo "<h2>Results:</h2>";
        echo "GCD of $num1 and $num2 is: $gcd<br>";
        echo "LCM of $num1 and $num2 is: $lcm<br>";
    }
    ?>
</body>
</html>
