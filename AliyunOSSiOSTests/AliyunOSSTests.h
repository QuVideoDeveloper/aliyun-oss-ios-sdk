//
//  AliyunOSSTests.h
//  AliyunOSSiOSTests
//
//  Created by huaixu on 2018/1/18.
//  Copyright © 2018年 aliyun. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "OSSService.h"
#import "OSSCompat.h"
#import "OSSXMLDictionary.h"
#import "OSSIPv6Adapter.h"
#import "OSSTestMacros.h"

@interface AliyunOSSTests : XCTestCase

@property (nonatomic, strong) OSSClient *client;
@property (nonatomic, copy) NSArray<NSString *> *fileNames;
@property (nonatomic, copy) NSArray<NSNumber *> *fileSizes;

@end
