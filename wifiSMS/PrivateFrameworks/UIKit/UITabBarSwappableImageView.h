/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UITabBar;

@interface UITabBarSwappableImageView : UIView {
	id _value;
	id _alternate;
	BOOL _showAlternate;
	BOOL _flipped;
	int _currentAnimation;
	UITabBar* _tabBar;
	int _buttonTag;
}
-(id)initWithImage:(id)image alternateImage:(id)image2;
-(void)dealloc;
-(void)setCurrentImage;
-(void)showAlternateImage:(BOOL)image;
-(void)setFlipped:(BOOL)flipped;
-(void)animateImage:(float)image withTabBar:(id)tabBar withTag:(int)tag;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
@end
