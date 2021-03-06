/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UISegmentedControl;



@interface PSMultiValueEditingPane : PSEditingPane 
{
    UISegmentedControl *_segmentedControl;
}


- (BOOL)requiresKeyboard;
- (BOOL)drawLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (NSInteger)selectedIndex;
- (void)selectIndex:(NSInteger)arg1;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;
- (void)segmentedControl:(id)arg1 selectedSegmentChanged:(NSInteger)arg2;

@end
