module;
#include <concepts>
#include "graph-v2-raw/include/graph/views/vertexlist.hpp"
#include "graph-v2-raw/include/graph/views/edgelist.hpp"
#include "graph-v2-raw/include/graph/views/neighbors.hpp"
#include "graph-v2-raw/include/graph/views/incidence.hpp"
#include "graph-v2-raw/include/graph/views/breadth_first_search.hpp"
#include "graph-v2-raw/include/graph/views/depth_first_search.hpp"

export module stdgraph:views;

// NOLINTBEGIN(misc-unused-using-decls)

export namespace std::graph
{
    // descriptors (return types)
    using ::graph::vertex_descriptor;
    using ::graph::edge_descriptor;
    using ::graph::neighbor_descriptor;

    // copyable descriptors
    using ::graph::copyable_vertex_t;
    using ::graph::copyable_edge_t;
    using ::graph::copyable_neighbor_t;

    // graph views
    using ::graph::views::vertexlist;
    using ::graph::views::incidence;
    using ::graph::views::neighbors;
    using ::graph::views::edgelist;

    // search views
    // utilities
    using ::graph::cancel_search;
    template <class S>
    void cancel(S search, cancel_search token)
    {
        search.cancel(token);
    }
    template <class S>
    std::integral auto depth(S search)
    {
        return search.depth();
    }
    template <class S>
    std::integral auto size(S search)
    {
        return search.size();
    }
    // depth first search views
    auto& vertices_dfs = ::graph::views::vertices_depth_first_search;
    auto& edges_dfs = ::graph::views::edges_depth_first_search;
    auto& sourced_edges_dfs = ::graph::views::sourced_edges_depth_first_search;
    // breadth first search views
    auto& vertices_bfs = ::graph::views::vertices_breadth_first_search;
    auto& edges_bfs = ::graph::views::edges_breadth_first_search;
    auto& sourced_edges_bfs = ::graph::views::sourced_edges_breadth_first_search;
    // topological sort views
    //but they are not implemented yet.
    //auto& vertices_topological_sort = ::graph::views::vertices_topological_sort;
    //auto& edges_topological_sort = ::graph::views::edges_topological_sort;
    //auto& sourced_edges_topological_sort = ::graph::views::sourced_edges_topological_sort;
    //auto& basic_vertices_topological_sort = ::graph::views::basic_vertices_topological_sort;
    //auto& basic_edges_topological_sort = ::graph::views::basic_edges_topological_sort;
    //auto& basic_sourced_edges_topological_sort = ::graph::views::basic_sourced_edges_topological_sort;

    //the following stuff are not implemented yet. yes, they are all "basic_xxx"s.
    //using ::graph::views::basic_vertexlist;
    //using ::graph::views::basic_incidence;
    //using ::graph::views::basic_neighbors;
    //using ::graph::views::basic_edgelist;
    //auto& basic_vertices_dfs = ::graph::views::basic_vertices_depth_first_search;
    //auto& basic_edges_dfs = ::graph::views::basic_edges_depth_first_search;
    //auto& basic_sourced_edges_dfs = ::graph::views::basic_sourced_edges_depth_first_search;
    //auto& basic_vertices_bfs = ::graph::views::basic_vertices_breadth_first_search;
    //auto& basic_edges_bfs = ::graph::views::basic_edges_breadth_first_search;
    //auto& basic_sourced_edges_bfs = ::graph::views::basic_sourced_edges_breadth_first_search;
}

// NOLINTEND(misc-unused-using-decls)