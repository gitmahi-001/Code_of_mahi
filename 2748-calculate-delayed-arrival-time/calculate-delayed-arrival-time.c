int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int n = arrivalTime + delayedTime;
    if (n == 24) {
        return 0;
    } else if (n >= 24) {
        return (n - 24);
    } else {
        return n;
    }
}