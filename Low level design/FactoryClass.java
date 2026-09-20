public class FactoryClass implements SafeRouteFactory {
    public Factory createFactory(String type){
        if("Hospital".equals(type)){
            return new Hospital("Apollo","Good",2);
        }
        if("FireStation".equals(type)){
            return new FireStation("Firerescue","Good",3);
        }
        if("PoliceStation".equals(type)){
            return new PoliceStation("Policestation1","excellent",3);
        }
        return null;
    }
    public People Getdetails(String type){
        return null;
    }
}
