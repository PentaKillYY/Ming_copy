//
//  MYIntroductionPanel.h
//  MYBlurIntroductionView-Example
//
//  Created by Matthew York on 10/16/13.
//  Copyright (c) 2013 Matthew York. All rights reserved.
//

#import <UIKit/UIKit.h>

const static CGFloat kTopPadding = 0;
const static CGFloat kLeftRightMargins = 0;
const static CGFloat kBottomPadding = 0;
const static CGFloat kHeaderTitlePadding = 0;
const static CGFloat kTitleDescriptionPadding = 0;
const static CGFloat kDescriptionImagePadding = 0;
static UIFont *kTitleFont = nil;
static UIColor *kTitleTextColor = nil;
static UIFont *kDescriptionFont = nil;
static UIColor *kDescriptionTextColor = nil;
static UIColor *kSeparatorLineColor = nil;

@class MYBlurIntroductionView;

@interface MYIntroductionPanel : UIView

@property (nonatomic, retain) MYBlurIntroductionView *parentIntroductionView;

@property (nonatomic, retain) UIView *PanelHeaderView;
@property (nonatomic, retain) NSString *PanelTitle;
@property (nonatomic, retain) NSString *PanelDescription;
@property (nonatomic, retain) UILabel *PanelTitleLabel;
@property (nonatomic, retain) UILabel *PanelDescriptionLabel;
@property (nonatomic, retain) UIView *PanelSeparatorLine;
@property (nonatomic, retain) UIImageView *PanelImageView;
@property (nonatomic, assign) BOOL isCustomPanel;
@property (nonatomic, assign) BOOL hasCustomAnimation;

//Init Methods
-(id)initWithFrame:(CGRect)frame title:(NSString *)title description:(NSString *)description;
-(id)initWithFrame:(CGRect)frame title:(NSString *)title description:(NSString *)description header:(UIView *)headerView;
-(id)initWithFrame:(CGRect)frame title:(NSString *)title description:(NSString *)description image:(UIImage *)image;
-(id)initWithFrame:(CGRect)frame title:(NSString *)title description:(NSString *)description image:(UIImage *)image header:(UIView *)headerView;
-(id)initWithFrame:(CGRect)frame nibNamed:(NSString *)nibName;

//Support Methods
+(BOOL)runningiOS7;

//Interaction Methods
-(void)panelDidAppear;
-(void)panelDidDisappear;

-(void)buildPanelWithFrame:(CGRect)frame;
@end
