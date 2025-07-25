/*
 * Copyright 2021 The DAPHNE Consortium
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string>
#include <unordered_map>

/**
 * @brief A Container that contains names of JSON parameters for user
 * configuration.
 */
struct DaphneConfigJsonParams {
    inline static const std::string USE_CUDA_ = "use_cuda";
    inline static const std::string USE_VECTORIZED_EXEC = "use_vectorized_exec";
    inline static const std::string USE_OBJ_REF_MGNT = "use_obj_ref_mgnt";
    inline static const std::string USE_IPA_CONST_PROPA = "use_ipa_const_propa";
    inline static const std::string USE_PHY_OP_SELECTION = "use_phy_op_selection";
    inline static const std::string USE_MLIR_CODEGEN = "use_mlir_codegen";
    inline static const std::string USE_COLUMNAR = "use_columnar";
    inline static const std::string MATMUL_VEC_SIZE_BITS = "matmul_vec_size_bits";
    inline static const std::string MATMUL_TILE = "matmul_tile";
    inline static const std::string MATMUL_FIXED_TILE_SIZES = "matmul_fixed_tile_sizes";
    inline static const std::string MATMUL_USE_FIXED_TILE_SIZES = "matmul_use_fixed_tile_sizes";
    inline static const std::string MATMUL_UNROLL_FACTOR = "matmul_unroll_factor";
    inline static const std::string MATMUL_UNROLL_JAM_FACTOR = "matmul_unroll_jam_factor";
    inline static const std::string MATMUL_NUM_VEC_REGISTERS = "matmul_num_vec_registers";
    inline static const std::string MATMUL_INVERT_LOOPS = "matmul_invert_loops";
    inline static const std::string CUDA_FUSE_ANY = "cuda_fuse_any";
    inline static const std::string VECTORIZED_SINGLE_QUEUE = "vectorized_single_queue";

    inline static const std::string DEBUG_LLVM = "debug_llvm";
    inline static const std::string EXPLAIN_COLUMNAR = "explain_columnar";
    inline static const std::string EXPLAIN_KERNELS = "explain_kernels";
    inline static const std::string EXPLAIN_LLVM = "explain_llvm";
    inline static const std::string EXPLAIN_PARSING = "explain_parsing";
    inline static const std::string EXPLAIN_PARSING_SIMPLIFIED = "explain_parsing_simplified";
    inline static const std::string EXPLAIN_PROPERTY_INFERENCE = "explain_property_inference";
    inline static const std::string EXPLAIN_SELECT_MATRIX_REPR = "explain_select_matrix_repr";
    inline static const std::string EXPLAIN_TRANSFER_DATA_PROPS = "explain_transfer_data_props";
    inline static const std::string EXPLAIN_SQL = "explain_sql";
    inline static const std::string EXPLAIN_PHY_OP_SELECTION = "explain_phy_op_selection";
    inline static const std::string EXPLAIN_TYPE_ADAPTATION = "explain_type_adaptation";
    inline static const std::string EXPLAIN_VECTORIZED = "explain_vectorized";
    inline static const std::string EXPLAIN_OBJ_REF_MGNT = "explain_obj_ref_mgnt";
    inline static const std::string EXPLAIN_MLIR_CODEGEN = "explain_mlir_codegen";
    inline static const std::string EXPLAIN_MLIR_CODEGEN_SPARSITY_EXPLOITING_OP_FUSION =
        "explain_mlir_codegen_sparsity_exploiting_op_fusion";
    inline static const std::string EXPLAIN_MLIR_CODEGEN_DAPHNEIR_TO_MLIR = "explain_mlir_codegen_daphneir_to_mlir";
    inline static const std::string EXPLAIN_MLIR_CODEGEN_MLIR_SPECIFIC = "explain_mlir_codegen_mlir_specific";
    inline static const std::string TASK_PARTITIONING_SCHEME = "taskPartitioningScheme";
    inline static const std::string NUMBER_OF_THREADS = "numberOfThreads";
    inline static const std::string MINIMUM_TASK_SIZE = "minimumTaskSize";
    inline static const std::string USE_HDFS_ = "useHdfs";
    inline static const std::string HDFS_ADDRESS = "hdfsAddress";
    inline static const std::string HDFS_USERNAME = "hdfsUsername";
    inline static const std::string CUDA_DEVICES = "cuda_devices";
    inline static const std::string LIB_DIR = "libdir";
    inline static const std::string DAPHNEDSL_IMPORT_PATHS = "daphnedsl_import_paths";
    inline static const std::string LOGGING = "logging";
    inline static const std::string FORCE_CUDA = "force_cuda";
    inline static const std::string SPARSITY_THRESHOLD = "sparsity_threshold";
    inline static const std::string ENABLE_PROPERTY_RECORDING = "enable_property_recording";
    inline static const std::string ENABLE_PROPERTY_INSERT = "enable_property_insert";
    inline static const std::string PROPERTIES_FILE_PATH = "properties_file_path";

    inline static const std::string JSON_PARAMS[] = {MATMUL_VEC_SIZE_BITS,
                                                     MATMUL_TILE,
                                                     MATMUL_FIXED_TILE_SIZES,
                                                     MATMUL_USE_FIXED_TILE_SIZES,
                                                     MATMUL_UNROLL_FACTOR,
                                                     MATMUL_UNROLL_JAM_FACTOR,
                                                     MATMUL_NUM_VEC_REGISTERS,
                                                     MATMUL_INVERT_LOOPS,
                                                     USE_CUDA_,
                                                     USE_VECTORIZED_EXEC,
                                                     USE_OBJ_REF_MGNT,
                                                     USE_IPA_CONST_PROPA,
                                                     USE_PHY_OP_SELECTION,
                                                     USE_MLIR_CODEGEN,
                                                     USE_COLUMNAR,
                                                     CUDA_FUSE_ANY,
                                                     VECTORIZED_SINGLE_QUEUE,
                                                     DEBUG_LLVM,
                                                     EXPLAIN_COLUMNAR,
                                                     EXPLAIN_KERNELS,
                                                     EXPLAIN_LLVM,
                                                     EXPLAIN_PARSING,
                                                     EXPLAIN_PARSING_SIMPLIFIED,
                                                     EXPLAIN_PROPERTY_INFERENCE,
                                                     EXPLAIN_SELECT_MATRIX_REPR,
                                                     EXPLAIN_TRANSFER_DATA_PROPS,
                                                     EXPLAIN_SQL,
                                                     EXPLAIN_PHY_OP_SELECTION,
                                                     EXPLAIN_TYPE_ADAPTATION,
                                                     EXPLAIN_VECTORIZED,
                                                     EXPLAIN_MLIR_CODEGEN,
                                                     EXPLAIN_MLIR_CODEGEN_SPARSITY_EXPLOITING_OP_FUSION,
                                                     EXPLAIN_MLIR_CODEGEN_DAPHNEIR_TO_MLIR,
                                                     EXPLAIN_MLIR_CODEGEN_MLIR_SPECIFIC,
                                                     EXPLAIN_OBJ_REF_MGNT,
                                                     ENABLE_PROPERTY_INSERT,
                                                     ENABLE_PROPERTY_RECORDING,
                                                     PROPERTIES_FILE_PATH,
                                                     TASK_PARTITIONING_SCHEME,
                                                     NUMBER_OF_THREADS,
                                                     MINIMUM_TASK_SIZE,
                                                     USE_HDFS_,
                                                     HDFS_ADDRESS,
                                                     HDFS_USERNAME,
                                                     CUDA_DEVICES,
                                                     LIB_DIR,
                                                     DAPHNEDSL_IMPORT_PATHS,
                                                     LOGGING,
                                                     FORCE_CUDA,
                                                     SPARSITY_THRESHOLD};
};
