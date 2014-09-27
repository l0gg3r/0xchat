/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */


@class DVTBorderedView, DVTLayoutView_ML, DVTObservingToken, DVTReplacementView, DVTSplitView, DVTSplitViewItem, DVTStateToken, IDEDebugArea, IDEDebugBar, IDEEditorContext, IDEEditorDocument, IDEEditorModeViewController, IDENavigableItemArchivableRepresentation, IDEWorkspaceTabControllerLayoutTree, NSMutableDictionary, NSString, NSView;

@interface IDEEditorArea : NSViewController
{
    NSView *_editorModeHostView;
    IDEEditorModeViewController *_editorModeViewController;
    int _editorMode;
    int _nonMiniDebuggingModeExtensionIdentifier;
    int _versionEditorSubmode;
    DVTObservingToken *_workspaceActivityObserver;
    IDEEditorContext *_lastActiveEditorContext;
    IDEDebugBar *_activeDebuggerBar;
    IDEDebugArea *_activeDebuggerArea;
    NSMutableDictionary *_defaultPersistentRepresentations;
    DVTLayoutView_ML *_editorAreaAutoLayoutView;
    DVTLayoutView_ML *_debuggerAreaAutoLayoutView;
    DVTBorderedView *_debuggerBarBorderedView;
    DVTBorderedView *_debuggerAreaBorderedView;
    DVTReplacementView *_debuggerBarReplacementView;
    DVTReplacementView *_debuggerAreaReplacementView;
    DVTSplitView *_debuggerSplitView;
    DVTSplitViewItem *_debugAreaSplitViewItem;
    double _heightToReturnToDebuggerArea;
    id _launchSessionObserver;
    DVTObservingToken *_inMiniDebuggingModeObservingToken;
    IDEWorkspaceTabControllerLayoutTree *_layoutTreeForNavigationHUD;
    IDEWorkspaceTabControllerLayoutTree *_oldLayoutTreeFromStateSaving;
    BOOL _didInstall;
    BOOL _needsToRefreshContexts;
    BOOL _didRestoreState;
    BOOL _userWantsEditorVisible;
    BOOL _showDebuggerArea;
    id  _setEditorModeAfterDelayToken;
    id  _invokeCompletionBlockAfterDelayToken;
    IDEEditorContext *_navigationTargetedEditorContext;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingShowEditor;
+ (id)keyPathsForValuesAffectingSelectedNavigableItemArchivedRepresentation;
+ (id)keyPathsForValuesAffectingNavigationTargetedEditorDocument;
+ (id)keyPathsForValuesAffectingPrimaryEditorDocument;
+ (id)keyPathsForValuesAffectingPrimaryEditorContext;
+ (int)defaultVersionEditorSubmode;
+ (int)defaultEditorMode;
+ (BOOL)automaticallyNotifiesObserversOfLastActiveEditorContext;
@property(retain) IDEEditorContext *navigationTargetedEditorContext; // @synthesize navigationTargetedEditorContext=_navigationTargetedEditorContext;
@property(nonatomic) int versionEditorSubmode; // @synthesize versionEditorSubmode=_versionEditorSubmode;
@property(nonatomic) int editorMode; // @synthesize editorMode=_editorMode;
@property(retain) IDEDebugArea *activeDebuggerArea; // @synthesize activeDebuggerArea=_activeDebuggerArea;
@property(retain) IDEDebugBar *activeDebuggerBar; // @synthesize activeDebuggerBar=_activeDebuggerBar;
@property(retain, nonatomic) IDEEditorContext *lastActiveEditorContext; // @synthesize lastActiveEditorContext=_lastActiveEditorContext;
@property(readonly) DVTReplacementView *debuggerAreaReplacementView; // @synthesize debuggerAreaReplacementView=_debuggerAreaReplacementView;
@property(nonatomic) BOOL userWantsEditorVisible; // @synthesize userWantsEditorVisible=_userWantsEditorVisible;
@property(retain) IDEEditorModeViewController *editorModeViewController; // @synthesize editorModeViewController=_editorModeViewController;
- (void)_clearLayoutTreeForNavigationHUD;
- (void)setLayoutTreeForNavigationHUD:(id)arg1;
@property(readonly) IDEWorkspaceTabControllerLayoutTree *layoutTreeForNavigationHUD;
- (id)_generateLayoutTreeForNavigationHUD;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain) DVTStateToken *stateToken; // @dynamic stateToken;
- (void)_updateStateSavingRegistrations;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_resizeSubviewsForHeightIncrease:(double)arg1;
- (void)_resizeSubviewsForHeightDecrease:(double)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)compareRevisionChange:(id)arg1;
- (void)showBlame;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)toggleDebuggerVisibility:(id)arg1;
- (void)activateConsole:(id)arg1;
@property BOOL showDebuggerArea;
- (void)_setShowDebuggerArea:(BOOL)arg1 animate:(BOOL)arg2;
- (void)showDebuggerArea:(id)arg1;
@property BOOL showEditor;
- (void)_updateDebuggerBarVisibility;
- (void)_addDebuggerBarToDebuggerArea;
- (void)_addDebuggerBarToEditorArea;
- (void)_moveDebuggerBarToDebuggerArea;
- (void)_moveDebuggerBarToEditorArea;
- (void)_hideDebuggerBarAndResetSplitViewFrames;
- (void)_resetSplitViewFrames;
@property(readonly) BOOL showDebuggerBar;
- (id)_defaultPersistentRepresentationForDocumentExtensionIdentifier:(id)arg1 documentURL:(id)arg2;
- (void)_clearDefaultPersistentRepresentationForDocumentExtensionIdentifier:(id)arg1 documentURL:(id)arg2;
- (void)_cacheDefaultPersistentRepresentation:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 documentURL:(id)arg3;
- (void)setStateSavingDefaultPersistentRepresentations:(id)arg1;
- (id)stateSavingDefaultPersistentRepresentations;
- (id)_editorContexts;
- (void)_openEditorOpenSpecifier:(id)arg1 editorContext:(id)arg2 takeFocus:(BOOL)arg3;
- (void)_openEditorHistoryItem:(id)arg1 editorContext:(id)arg2 takeFocus:(BOOL)arg3;
@property(readonly) IDENavigableItemArchivableRepresentation *selectedNavigableItemArchivedRepresentation;
@property(readonly) IDEEditorDocument *navigationTargetedEditorDocument;
@property(readonly) IDEEditorDocument *primaryEditorDocument;
@property(readonly) IDEEditorContext *primaryEditorContext;
- (void)_installDebugAreaWithExtensionID:(id)arg1 revertDebugAreaState:(BOOL)arg2;
- (void)installDebugAreaWithExtensionID:(id)arg1;
- (void)_installDefaultDebugAreaAndRevertDebugAreaState:(BOOL)arg1;
- (void)installDefaultDebugArea;
- (void)_setEditorMode:(int)arg1;
- (void)editorContextWasRemoved:(id)arg1;
- (void)editorContextDidBecomeLastActiveEditor:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_refreshEditorContextsAndPreserveCurrentEditorHistoryStack:(BOOL)arg1;
- (void)_resetEditor;
- (BOOL)_canResetEditor;
- (void)_removeAssistantEditor;
- (BOOL)_canRemoveAssistantEditor;
- (id)_addNewAssistantEditor;
- (BOOL)_canAddNewAssistantEditor;
- (void)_addAssistantEditor;
- (BOOL)_canAddAssistantEditor;
- (void)_setAssistantEditorsLayout:(int)arg1;
- (BOOL)_canChangeAssistantEditorsLayout;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_setEditorModeViewControllerWithPrimaryEditorContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

