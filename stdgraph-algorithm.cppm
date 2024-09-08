module;
#include "graph-v2-raw/include/graph/algorithm/topological_sort.hpp"
#include "graph-v2-raw/include/graph/algorithm/dijkstra_shortest_paths.hpp"
#include "graph-v2-raw/include/graph/algorithm/bellman_ford_shortest_paths.hpp"
#include "graph-v2-raw/include/graph/algorithm/tc.hpp"
#include "graph-v2-raw/include/graph/algorithm/connected_components.hpp"
#include "graph-v2-raw/include/graph/algorithm/mis.hpp"
#include "graph-v2-raw/include/graph/algorithm/mst.hpp"

export module stdgraph:algorithm;

// NOLINTBEGIN(misc-unused-using-decls)

export namespace std::graph
{
    // tier 1 (tier "standard")
    //  traversal
    //   - breadth-first search
    //   - depth-first search
    //   - topological sort             √
    //  shortest paths
    //   - dijkstra's                   √
    //   - bellman-ford's               √
    //  clustering
    //   - triangle counting            √
    //  communities
    //   - label propagation
    //  components
    //   - articulation points
    //   - connected components         √
    //   - biconnected components
    //   - kosaraju's strongly cc
    //   - tarjan's strongly cc
    //  maximal independent set
    //   - maximal independent set      √
    //  link analysis
    //   - jaccaard coefficient
    //  minumal spanning tree
    //   - kruskal's mst                √
    //   - prim's mst                   √
    using ::graph::topological_sort;
    using ::graph::dijkstra_shortest_paths;
    using ::graph::dijkstra_shortest_distances;
    using ::graph::dijkstra_visitor_base;
    using ::graph::bellman_ford_shortest_paths;
    using ::graph::bellman_ford_shortest_distances;
    using ::graph::bellman_visitor_base;
    using ::graph::triangle_count;
    using ::graph::connected_components;
    using ::graph::maximal_independent_set;
    using ::graph::kruskal;
    using ::graph::prim;
}

// NOLINTEND(misc-unused-using-decls)