//
//  RootViewController.h
//  StoryboardPagingDemo
//
//  Created by Derek Lee on 2/6/15.
//  Copyright (c) 2015 Derek Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDataSource>

#pragma mark - Public Methods
- (void)goToPreviousContentViewController;
- (void)goToNextContentViewController;

@end
