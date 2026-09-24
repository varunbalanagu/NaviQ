class EmergencyService{
    public Route findRoute(){
        return new Route(NativeRouting.aStar());
    }
}