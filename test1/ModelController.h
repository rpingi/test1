//
//  ModelController.h
//  test1
//
//  Created by Ricardo Pingitore on 20/3/15.
//  Copyright (c) 2015 Ricardo Pingitore. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

