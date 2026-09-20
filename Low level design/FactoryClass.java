interface Factory{
    // void provide();
}
// A factory design of all the safe stations 
public class FactoryClass implements SafeRouteFactory {
    public   Factory createFactory(String type){
        if(type.equals("Hospital")){
            return new Hospital("Apollo","Good",2);
        }
        if(type.equals("FireStation")){
            return new FireStation("Firerescue","Good",3);
        }
        if(type.equals("PoliceStation")){
            return new PoliceStation("Policestation1","excellent",3);
        }
        return null;
    }
    public  People Getdetails(String type){
        return null;
    }
}
