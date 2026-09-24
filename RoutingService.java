class RoutingService{
    public Route findRoute(int destination) {

        int[] distances = NativeRouting.dijkstra();

        return new Route(distances);
    }

    public Route findEmergencyRoute(int destination) {

        int[] distances = NativeRouting.aStar();

        return new Route(distances);
    }
}