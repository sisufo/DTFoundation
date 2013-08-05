//
//  ZipArchiveManager.h
//  Zippo
//
//  Created by Stefan Gugarel on 3/15/13.
//  Copyright (c) 2013 Drobnik KG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ZipArchiveModel;

@interface ZipArchiveManager : NSObject

- (id)initWithURL:(NSURL *)URL;

- (NSUInteger)numberOfArchives;

- (ZipArchiveModel *)archiveAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSURL *URL;

@property (nonatomic, readonly) NSArray *archives;

@end
