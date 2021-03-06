/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;



@interface PSConfirmationSpecifier : PSSpecifier 
{
    NSString *_title;
    NSString *_okButton;
    NSString *_cancelButton;
}

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(NSInteger)arg6 edit:(Class)arg7;

- (void)setupWithDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)okButton;
- (id)cancelButton;
- (void)dealloc;

@end
