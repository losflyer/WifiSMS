/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;



@interface EDPivotItem : NSObject 
{
    NSUInteger mRepeatedItemCounts;
    NSInteger mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)init;
- (void)dealloc;
- (NSUInteger)repeatedItemCounts;
- (void)setRepeatedItemCounts:(NSUInteger)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)itemIndexes;

@end
