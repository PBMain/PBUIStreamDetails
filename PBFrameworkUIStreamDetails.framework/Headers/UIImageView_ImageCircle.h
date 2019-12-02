//
//  UIImageView_ImageCircle.h
//  PhotoButler
//
//  Created by Daniel Spencer on 5/4/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

// Takes a square image and makes it into a circle

#import <UIKit/UIKit.h>

@interface ImageCircle : UIImageView

@property (nonatomic) UIView *badgeView;
@property (nonatomic) UIView *borderView;
@property (nonatomic) NSNumber *savedBadgeValue;
@property (nonatomic) UIImageView *actualImageView;

// When used from interface building, UIImageView is instantiated with initWithCoder
-(instancetype)initWithCoder:(NSCoder *)aDecoder;

-(void) displayBadge:(NSNumber*)badgeValue;
-(void) setInternalSize:(CGSize)newSize;
-(void) addCircleBorderOfColor:(UIColor*)color;

-(ImageCircle*) copy;

@end
