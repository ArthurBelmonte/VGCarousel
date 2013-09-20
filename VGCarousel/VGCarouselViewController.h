//
//  VGCarouselViewController.h
//  VGCarousel
//
//  Created by Charles Joseph Uy on 9/18/13.
//  Copyright (c) 2013 Charles Joseph Uy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VGCarouselViewController;
@class VGCarouselTitleView;

@protocol VGCarouselViewControllerDelegate <NSObject>

- (void)carouselViewController:(VGCarouselViewController *)carouselViewController didChangeToIndex:(NSUInteger)index;

@end

@interface VGCarouselViewController : UIViewController

@property (nonatomic, assign) id <VGCarouselViewControllerDelegate> delegate;
@property (nonatomic, strong, readonly) VGCarouselTitleView *carouselTitleView;
@property (nonatomic) CGFloat percentageTranslationThreshold;
@property (nonatomic, readonly) NSUInteger indexOfCurrentCenterCarouselViewController;

- (id)initWithViewControllers:(NSArray *)viewControllers;

@end
