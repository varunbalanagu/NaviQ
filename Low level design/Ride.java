 public class Ride {
    int rideId;
    int source;
    int destination;
    double distance;
    boolean cancelled;

    public Ride(int rideId, int source, int destination, double distance) {
        this.rideId = rideId;
        this.source = source;
        this.destination = destination;
        this.distance = distance;
        this.cancelled = false;
    }
} 
    

