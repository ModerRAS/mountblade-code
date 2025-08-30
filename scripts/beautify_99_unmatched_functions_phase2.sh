#!/bin/bash

# 继续美化99_unmatched_functions.c文件中的变量名
# 将十六进制地址替换为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 队列相关变量名替换
sed -i 's/g_system_data_synchronized_queue_02440/g_system_data_synchronized_queue_primary/g' "$FILE"
sed -i 's/g_system_data_parallel_queue_0253c/g_system_data_parallel_queue_primary/g' "$FILE"
sed -i 's/g_system_data_distributed_queue_02548/g_system_data_distributed_queue_primary/g' "$FILE"
sed -i 's/g_system_data_cluster_queue_02558/g_system_data_cluster_queue_primary/g' "$FILE"
sed -i 's/g_system_data_cloud_queue_02560/g_system_data_cloud_queue_primary/g' "$FILE"
sed -i 's/g_system_data_messaging_queue_0256c/g_system_data_messaging_queue_primary/g' "$FILE"
sed -i 's/g_system_data_event_queue_02580/g_system_data_event_queue_primary/g' "$FILE"
sed -i 's/g_system_data_command_queue_02490/g_system_data_command_queue_primary/g' "$FILE"
sed -i 's/g_system_data_request_queue_024f0/g_system_data_request_queue_primary/g' "$FILE"
sed -i 's/g_system_data_response_queue_023e0/g_system_data_response_queue_primary/g' "$FILE"
sed -i 's/g_system_data_notification_queue_17010/g_system_data_notification_queue_primary/g' "$FILE"
sed -i 's/g_system_data_alert_queue_17458/g_system_data_alert_queue_primary/g' "$FILE"

# 队列配置相关变量名替换
sed -i 's/g_system_config_data_queue_manager_02638/g_system_config_data_queue_manager_primary/g' "$FILE"
sed -i 's/g_system_config_data_queue_scheduler_0263c/g_system_config_data_queue_scheduler_primary/g' "$FILE"
sed -i 's/g_system_config_data_queue_monitor_02640/g_system_config_data_queue_monitor_primary/g' "$FILE"
sed -i 's/g_system_config_data_queue_analyzer_02644/g_system_config_data_queue_analyzer_primary/g' "$FILE"
sed -i 's/g_system_config_data_queue_optimizer_02648/g_system_config_data_queue_optimizer_primary/g' "$FILE"
sed -i 's/g_system_config_data_queue_balancer_0264c/g_system_config_data_queue_balancer_primary/g' "$FILE"

# 缓存系统相关变量名替换
sed -i 's/g_system_data_cache_system_028d8/g_system_data_cache_system_primary/g' "$FILE"
sed -i 's/g_system_data_memory_cache_028e0/g_system_data_memory_cache_primary/g' "$FILE"
sed -i 's/g_system_data_disk_cache_028e8/g_system_data_disk_cache_primary/g' "$FILE"
sed -i 's/g_system_data_network_cache_028f8/g_system_data_network_cache_primary/g' "$FILE"
sed -i 's/g_system_data_database_cache_02918/g_system_data_database_cache_primary/g' "$FILE"
sed -i 's/g_system_data_file_cache_02908/g_system_data_file_cache_primary/g' "$FILE"
sed -i 's/g_system_data_image_cache_02928/g_system_data_image_cache_primary/g' "$FILE"
sed -i 's/g_system_data_video_cache_02940/g_system_data_video_cache_primary/g' "$FILE"

# 缓存管理相关变量名替换
sed -i 's/g_system_config_data_cache_manager_06430/g_system_config_data_cache_manager_primary/g' "$FILE"
sed -i 's/g_system_data_cache_eviction_029b0/g_system_data_cache_eviction_manager/g' "$FILE"
sed -i 's/g_system_data_cache_replacement_029d0/g_system_data_cache_replacement_manager/g' "$FILE"
sed -i 's/g_system_data_cache_compression_84660/g_system_data_cache_compression_manager/g' "$FILE"
sed -i 's/g_system_data_cache_encryption_176f8/g_system_data_cache_encryption_manager/g' "$FILE"
sed -i 's/g_system_data_cache_validation_14060/g_system_data_cache_validation_manager/g' "$FILE"
sed -i 's/g_system_data_cache_synchronization_02dd8/g_system_data_cache_synchronization_manager/g' "$FILE"
sed -i 's/g_system_data_cache_replication_13fa8/g_system_data_cache_replication_manager/g' "$FILE"

# 缓存高级功能相关变量名替换
sed -i 's/g_system_data_cache_distribution_029f0/g_system_data_cache_distribution_manager/g' "$FILE"
sed -i 's/g_system_data_cache_partitioning_02a00/g_system_data_cache_partitioning_manager/g' "$FILE"
sed -i 's/g_system_data_cache_sharding_02a40/g_system_data_cache_sharding_manager/g' "$FILE"
sed -i 's/g_system_data_cache_clustering_02a20/g_system_data_cache_clustering_manager/g' "$FILE"
sed -i 's/g_system_data_cache_mirroring_02a80/g_system_data_cache_mirroring_manager/g' "$FILE"
sed -i 's/g_system_data_cache_backup_03008/g_system_data_cache_backup_manager/g' "$FILE"
sed -i 's/g_system_data_cache_recovery_02a60/g_system_data_cache_recovery_manager/g' "$FILE"
sed -i 's/g_system_data_cache_maintenance_02aa8/g_system_data_cache_maintenance_manager/g' "$FILE"
sed -i 's/g_system_data_cache_optimization_02b30/g_system_data_cache_optimization_manager/g' "$FILE"

# 全局变量替换
sed -i 's/g_global_system_config_data/g_global_system_config_data_primary/g' "$FILE"

echo "第二阶段变量名美化完成"