/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for wmi_script_event_consumers
// Spec file: specs/windows/wmi_script_event_consumers.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class wmiScriptEventConsumers : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(wmiScriptEventConsumers, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from wmi_script_event_consumers");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"name", NormalType}
  //      {"scripting_engine", NormalType}
  //      {"script_file_name", NormalType}
  //      {"script_text", NormalType}
  //      {"class", NormalType}
  //      {"relative_path", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery