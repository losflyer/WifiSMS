/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorksheet;



@interface EPApplyReferences : EDProcessor 
{
    EDWorksheet *mWorksheet;
}


- (void)applyProcessorToObject:(id)arg1 withWorkbook:(id)arg2;
- (id)collectionFromWorksheet:(id)arg1;
- (NSUInteger)referenceCountFromObject:(id)arg1;
- (id)referenceFromObject:(id)arg1 withIndex:(NSUInteger)arg2;
- (void)markColumnInfo:(id)arg1 withObject:(id)arg2;
- (void)markRow:(id)arg1 withObject:(id)arg2;
- (void)markCell:(id)arg1 withObject:(id)arg2;
- (void)markCellsInReferences:(id)arg1;
- (void)markCellsInReference:(id)arg1 withObject:(id)arg2;

@end
