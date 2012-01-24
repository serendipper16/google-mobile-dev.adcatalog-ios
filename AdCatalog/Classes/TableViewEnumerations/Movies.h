// Movies.h
// Copyright 2011 Google Inc.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

@interface Movie : NSObject {
}

@property(nonatomic, retain) NSString *title;
@property(nonatomic, retain) NSURL *url;

+ (Movie *)movieWithTitle:(NSString *)title url:(NSURL *)url;

@end


@interface Movies : NSObject <UITableViewDataSource> {
}

@property(nonatomic, retain) NSArray *values;

+ (Movies *)singleton;
- (NSURL *)urlForMovieAtIndex:(NSUInteger)index;

@end