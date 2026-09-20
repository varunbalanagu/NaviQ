public class Main {
    public static void main(String[] args) {
        SafeRouteFactory safe=new DataFactory();
        People User =safe.Getdetails("PersonalUser");
        People Commerical=safe.Getdetails("UserDetails");
       SafeRouteFactory safe2=new FactoryClass();
       Factory Station1=safe2.createFactory("PoliceStation");
    }
          
}
