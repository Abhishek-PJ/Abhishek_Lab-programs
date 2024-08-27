//Develop a PHP program to display prime numbers between the given range and display the total number of prime numbers.
<?php
function isPrime($num) {
    if ($num <= 1) return false;
    if ($num == 2) return true;
    if ($num % 2 == 0) return false;
    for ($i = 3; $i <= sqrt($num); $i += 2) {
        if ($num % $i == 0) return false;
    }
    return true;
}

function displayPrimesInRange($start, $end) {
    $count = 0;
    echo "Prime numbers between $start and $end are:<br>";
    for ($i = $start; $i <= $end; $i++) {
        if (isPrime($i)) {
            echo $i . " ";
            $count++;
        }
    }
    echo "<br>Total number of prime numbers: $count";
}

// Example usage
$start = 10;
$end = 50;

displayPrimesInRange($start, $end);
?>
