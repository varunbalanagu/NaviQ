public class Route {

    private int[] distances;

    public Route(int[] distances) {
        this.distances = distances;
    }

    public int getDistance(int destination) {
        return distances[destination];
    }

    public void displayRoute(int destination) {
        System.out.println("Minimum distance: " + distances[destination]);
    }
}