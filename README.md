# Smart Routing

Smart Routing is a collection of route-planning algorithms and Java service abstractions for finding routes and nearby emergency stations.

## Contents

- `Algorithms/Distance algorithms/`
  - Dijkstra shortest-path algorithm
  - A* search
  - Bellman-Ford and A*/Bellman-Ford variants
- `Algorithms/Binary-search-for-number-of-places.cpp/`
  - Binary search for the minimum distance to a requested station
- `Algorithms/Priority_station/`
  - Feedback conversion and priority queue implementations
- `Low level design/`
  - Factory and abstract-factory examples for hospitals, fire stations, police stations, and users
- Java routing services
  - `RoutingService` delegates normal routing to Dijkstra and emergency routing to A*
  - `EmergencyService` delegates nearest-station lookup to binary search
  - `NativeRouting` defines the Java native-method bridge

## Java Build Check

From the repository root, compile all Java sources:

```powershell
$build = Join-Path $env:TEMP 'smart-routing-build'
Remove-Item $build -Recurse -Force -ErrorAction SilentlyContinue
New-Item -ItemType Directory -Path $build | Out-Null
$sources = (Get-ChildItem -Recurse -Filter *.java).FullName
javac -d $build $sources
```

The low-level design example can be run with:

```powershell
java -cp $build Main
```

## C++ Build Checks

Compile an individual C++ algorithm with a C++17 compiler:

```powershell
g++ -std=c++17 "Algorithms/Distance algorithms/Dijkstra.cpp" -o dijkstra.exe
g++ -std=c++17 "Algorithms/Distance algorithms/A Staralgorithm.cpp" -o astar.exe
g++ -std=c++17 "Algorithms/Binary-search-for-number-of-places.cpp/Number-of-places.cpp" -o station-search.exe
```

Generated executables are ignored by `.gitignore`.

## Java and C++ Integration

`NativeRouting.java` declares native entry points for:

- `dijkstra()`
- `aStar()`
- `binarySearch(int[] stations, int station, int[] lengths)`

To execute these methods from Java, build a JNI shared library named `routing` and make it available through Java's native library path. The repository currently contains the C++ algorithm sources and Java declarations; JNI wrapper functions and the platform-specific native build configuration still need to be supplied for runtime integration.

## Status

The Java sources compile successfully. The C++ algorithms are maintained as standalone source files, and the Java service classes are structured to call them through the native bridge once the JNI library is available.
