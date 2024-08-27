#Write a PHP program that displays a different message based on time of day. For example page should display
#“Good Morning” if it is accessed in the morning.
<?php
// Get the current hour in 24-hour format
$currentHour = date("H");

// Determine the message based on the time of day
if ($currentHour >= 5 && $currentHour < 12) {
    $message = "Good Morning";
} elseif ($currentHour >= 12 && $currentHour < 17) {
    $message = "Good Afternoon";
} elseif ($currentHour >= 17 && $currentHour < 21) {
    $message = "Good Evening";
} else {
    $message = "Good Night";
}

// Display the message
echo $message;
?>
