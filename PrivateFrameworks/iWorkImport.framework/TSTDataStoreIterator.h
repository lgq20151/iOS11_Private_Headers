/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating> {
    TSTCell * _cell;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _curCellID;
    TSTTableTileRowInfo * _curRow;
    unsigned short  _curRowIndex;
    TSTTableTile * _curTile;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _curTileRange;
    TSTTableDataStore * _dataStore;
    TSTCellRegion * _region;
    struct NSObject { Class x1; } * _regionIterator;
    bool  _rightToLeft;
    unsigned long long  _searchMask;
    TSTTableModel * _tableModel;
    bool  _terminated;
}

@property (nonatomic, readonly) TSTCell *cell;
@property (nonatomic, readonly) unsigned short cellCountInRow;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } curCellID;
@property (nonatomic, retain) TSTTableTileRowInfo *curRow;
@property (nonatomic) unsigned short curRowIndex;
@property (nonatomic, retain) TSTTableTile *curTile;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } curTileRange;
@property (nonatomic, readonly) TSTTableDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSTCellRegion *region;
@property (nonatomic, readonly) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic) bool rightToLeft;
@property (nonatomic) unsigned long long searchMask;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) TSTInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic) bool terminated;

- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })advanceToCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)cell;
- (unsigned short)cellCountInRow;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })curCellID;
- (id)curRow;
- (unsigned short)curRowIndex;
- (id)curTile;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })curTileRange;
- (id)dataStore;
- (void)dealloc;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (bool)getNextCellData:(id*)arg1;
- (id)initWithInfoDelegating:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;
- (void)iterateCellsUsingBlock:(id /* block */)arg1;
- (id)nextCellData;
- (void)p_setupTileAndRowAtCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)region;
- (struct NSObject { Class x1; }*)regionIterator;
- (bool)rightToLeft;
- (unsigned long long)searchMask;
- (void)setCurCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCurRow:(id)arg1;
- (void)setCurRowIndex:(unsigned short)arg1;
- (void)setCurTile:(id)arg1;
- (void)setCurTileRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRightToLeft:(bool)arg1;
- (void)setSearchMask:(unsigned long long)arg1;
- (void)setTerminated:(bool)arg1;
- (id)tableModel;
- (void)terminate;
- (bool)terminated;
- (void)updateCellData:(id)arg1;

@end
