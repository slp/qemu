/* e820 types */
#define E820_RAM        1
#define E820_RESERVED   2
#define E820_ACPI       3
#define E820_NVS        4
#define E820_UNUSABLE   5

int e820_add_entry(uint64_t address, uint64_t length, uint32_t type);
int e820_get_num_entries(void);
bool e820_get_entry(int idx, uint32_t type, uint64_t *address, uint64_t *length);
void e820_create_fw_entry(FWCfgState *fw_cfg);
