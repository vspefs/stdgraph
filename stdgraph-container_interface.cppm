module;
#include <type_traits>
#include "graph-v2-raw/include/graph/graph.hpp"
#include "graph-v2-raw/include/graph/edgelist.hpp"

export module stdgraph:container_interface;

// NOLINTBEGIN(misc-unused-using-decls)

export namespace std::graph
{
    // traits
    using ::graph::has_degree;
    using ::graph::has_find_vertex;
    using ::graph::has_find_vertex_edge;
    using ::graph::has_contains_edge;
    using ::graph::define_unordered_edge;
    using ::graph::is_adjacency_matrix;
    using ::graph::is_adjacency_matrix_v;
    using ::graph::adjacency_matrix;
    // types
    using ::graph::graph_reference_t;
    template <class G>
        using graph_value_t = std::invoke_result_t<decltype(::graph::graph_value), G>;
    using ::graph::vertex_range_t;
    using ::graph::vertex_iterator_t;
    using ::graph::vertex_t;
    using ::graph::vertex_reference_t;
    using ::graph::vertex_id_t;
    using ::graph::vertex_value_t;
    using ::graph::vertex_edge_range_t;
    using ::graph::vertex_edge_iterator_t;
    using ::graph::edge_t;
    using ::graph::edge_reference_t;
    using ::graph::edge_value_t;
    using ::graph::partition_id_t;
    template<class G>
        using partition_vertex_range_t = std::invoke_result_t<decltype(::graph::vertices), G, ::graph::partition_id_t<G>>;
    // classes and structs
    using ::graph::graph_error;
    // functions
    using ::graph::graph_value;
    using ::graph::vertices;
    using ::graph::num_vertices;
    using ::graph::num_edges;
    using ::graph::has_edge;
    using ::graph::num_partitions;
    using ::graph::find_vertex;
    using ::graph::vertex_id;
    using ::graph::vertex_value;
    using ::graph::degree;
    using ::graph::edges;
    using ::graph::partition_id;
    using ::graph::target_id;
    using ::graph::target;
    using ::graph::edge_value;
    using ::graph::find_vertex_edge;
    using ::graph::contains_edge;
    using ::graph::source_id;
    using ::graph::source;
}

export namespace std::graph::edgelist
{
    // traits
    using ::graph::edgelist::is_directed;
    using ::graph::edgelist::is_directed_v;
    // types
    using ::graph::edgelist::edge_range_t;
    using ::graph::edgelist::edge_iterator_t;
    using ::graph::edgelist::edge_t;
    using ::graph::edgelist::edge_reference_t;
    using ::graph::edgelist::edge_value_t;
    using ::graph::edgelist::vertex_id_t;
    // functions
    using ::graph::target_id;
    using ::graph::source_id;
    using ::graph::edge_value;
    //the following 3 functions are TODOs in the current implementation
    //using ::graph::edgelist::contains_edge;
    //using ::graph::edgelist::num_edge;
    //using ::graph::edgelist::has_edge;
}

// NOLINTEND(misc-unused-using-decls)