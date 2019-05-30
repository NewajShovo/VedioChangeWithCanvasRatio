//
//  showVideoVC.h
//  VideoTransitionApp
//
//  Created by leo on 13/5/19.
//  Copyright © 2019 Shafiq Shovo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import "myslider.h"
NS_ASSUME_NONNULL_BEGIN

@interface showVideoVC : UIViewController < mysliderViewDelegate >
@property (nonatomic) PHAsset *asset1;
@property (nonatomic) PHAsset *asset2;
@property (nonatomic,strong) NSMutableArray *PhAssets;
@property (strong, nonatomic) IBOutlet UISlider *mySlider;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *Height;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *Width;

@end

NS_ASSUME_NONNULL_END
