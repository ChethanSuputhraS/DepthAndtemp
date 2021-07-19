//
//  CustomAnnotation.h
//  Custom Annotations
//
//  Created by Robert Ryan on 2/18/13.
//  Copyright (c) 2013 Robert Ryan. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface CustomAnnotation : MKPlacemark

@property (strong, nonatomic) NSString * title;
@property (strong, nonatomic) NSString * subtitle1;
@property (strong, nonatomic) NSString * subtitle2;
@property (strong, nonatomic) NSString * img;

@property(strong,nonatomic) UIButton *btn;

@property (nonatomic) NSUInteger index;



@end
