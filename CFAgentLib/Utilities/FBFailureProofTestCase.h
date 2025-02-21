/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <CFAgentLib/XCTestCase.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Test Case that will never fail or stop from running in case of failure
 */
@interface FBFailureProofTestCase : XCTestCase
@end

NS_ASSUME_NONNULL_END
