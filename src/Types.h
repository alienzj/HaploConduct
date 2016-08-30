//============================================================================
// Name        : Types.h
// Author      : Jasmijn Baaijens
// Version     : 0.01 Beta
// License     : GNU GPL v3.0
// Project     : ViralQuasispecies
// Description : Types used for ViralQuasispecies program
//============================================================================

#ifndef TYPES_H_
#define TYPES_H_

#include <string>
#include <sys/time.h>
#include <unistd.h>
#include <limits.h>
#include <cstdlib>

struct ProgramSettings {
    std::string fastq_file;
    std::string singles_file;
    std::string paired1_file;
    std::string paired2_file;
    std::string overlaps_file;
    std::string output_dir;
    std::string id_correspondence;
    unsigned long max_overlaps;
    unsigned int n_threads;
    unsigned long max_reads;
    unsigned int min_clique_size;
    double min_qual;
    unsigned int min_overlap_perc;
    unsigned int min_overlap_len;
    double edge_threshold;
    double ov_threshold;
    bool allow_spaces;
    bool first_it;
    bool add_duplicates;
    bool resolve_orientations;
    unsigned int keep_singletons;
    bool error_correction;
    bool cliques;
    bool graph_only;
    int fno;
    unsigned int original_readcount;
    bool ignore_inclusions;
    double mismatch;
    bool optimize;
    bool no_inclusions;
    double merge_contigs;
    bool remove_multi_occ;
    unsigned int remove_trans;
    bool remove_branches;
    unsigned int min_read_len;
    std::string base_path;
};

struct IterationStats {
    unsigned int vertex_count;
    unsigned int edge_count;
    int max_read_len;
    int min_read_len;
    int average_read_len;
};

struct SubreadInfo {
    int index1;
    int index2;
    int startpos1;
    int startpos2;
};

struct OriginalIndex {
    long index1;
    long index2;
    bool is_paired;
};

typedef unsigned int read_id_t;
typedef unsigned int node_id_t;

inline read_id_t str_to_read_id(std::string input_id)
{
    return strtoul(input_id.c_str(), NULL, 0);
}

inline std::string read_id_to_str(read_id_t id)
{
    return std::to_string(id);
}

#endif /* TYPES_H_ */