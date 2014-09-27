/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class DVTFindBar, DVTMapTable, DVTObservingToken, DVTScopeBarController, DVTScopeBarView, DVTScopeBarsManager, IDEConsoleTextView, IDEWorkspaceDocument, NSButton, NSMutableArray, NSMutableSet, NSPopUpButton, NSScrollView, NSSet, NSString, NSTimer, NSUndoManager, NSView;

@interface IDEConsoleArea : NSViewController
{
    @public
    DVTScopeBarView *_scopeBar;
    IDEConsoleTextView *_consoleView;
    NSPopUpButton *_filterModePopUpButton;
    NSButton *_clearConsoleButton;
    IDEWorkspaceDocument *_workspaceDocument;
    NSMutableArray *_inputHistoryForDebugger;
    unsigned long long _inputHistoryIndexForDebugger;
    NSString *_userEnteredTextBeforeShowingCommandHistory;
    NSUndoManager *_undoManager;
    NSMutableSet *_consoleAdaptors;
    DVTMapTable *_launchSessionsToClearTimes;
    NSSet *_initialConsoleItems;
    NSTimer *_clearInitialConsoleItemsTimer;
    DVTObservingToken *_workspaceDocumentObserverToken;
    DVTObservingToken *_launchSessionsObserverToken;
    DVTObservingToken *_consoleAdaptorsObservingToken;
    DVTObservingToken *_debugSessionStateObservingToken;
    DVTFindBar *_findBar;
    DVTScopeBarController *_findScopeBarController;
    DVTScopeBarsManager *_scopeBarsManager;
    struct _NSRange _originalSelection;
    id _findStringChangedNotificationToken;
    int _filterMode;
    BOOL _hasNewInterestingOutput;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(readonly) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBar;
@property BOOL hasNewInterestingOutput; // @synthesize hasNewInterestingOutput=_hasNewInterestingOutput;
@property(nonatomic) int filterMode; // @synthesize filterMode=_filterMode;

- (id)undoManagerForTextView:(id)arg1;
- (void)completingTextView:(id)arg1 willPassContextToStrategies:(id)arg2 atWordStartLocation:(unsigned long long)arg3;
- (void)setupTextViewContextMenuWithMenu:(id)arg1;
- (void)_assertUnsupportedAction;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)useSelectionForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)hideFindBar:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)find:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (BOOL)dvtFindBar:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (id)viewToShowWrapOrEndOfFileBezelOn:(id)arg1;
- (void)_stopObservingGlobalFindStringDidChangeNotification;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
@property(readonly) NSView *scopeBarsBaseView;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_findBar:(BOOL)arg1;
- (id)_createFindBar;
- (void)_installFindBar;
- (BOOL)_isFindBarInstalled;
- (struct _NSRange)rangeOfExpressionInUserEnteredStringAfterPrompt:(id)arg1;
- (void)showNextCommandFromHistory:(id)arg1;
- (void)showPreviousCommandFromHistory:(id)arg1 currentStringAfterPrompt:(id)arg2;
- (void)consoleView:(id)arg1 didEndText:(id)arg2 forDebugger:(BOOL)arg3 trackHistory:(BOOL)arg4;
@property(readonly) BOOL tracksInputHistoryForDebugger;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) NSMutableArray *inputHistoryForDebugger;
- (void)_outputForConsole:(id)arg1;
- (void)_debugSessionPausedScriptingStateChanged;
- (void)_debugSessionStateChanged;
- (BOOL)delegateFirstResponder;
- (void)_removeConsoleAdaptors:(id)arg1;
- (void)_addConsoleAdaptors:(id)arg1;
- (void)_updateConsoleAdaptorsForCurrentLaunchSession;
- (void)_timerFiredToClearInitialConsoleItems:(id)arg1;
- (BOOL)_shouldAppendItem:(id)arg1;
- (void)_appendItems:(id)arg1;
- (void)_appendItem:(id)arg1;
- (void)_clearText;
- (void)primitiveInvalidate;
- (void)_removeObserverForConsoleAdaptor:(id)arg1;
- (void)_filterChanged;
- (void)clearConsole:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (void)_setWorkspaceDocument:(id)arg1;
- (id)_sortedCompletionStrategiesForGroupIdentifier:(id)arg1;
- (void)_installCompletionStrategiesBasedOnDebugger;
- (void)_invalidateFindBarResults;
- (void)activateConsole;
- (BOOL)becomeFirstResponder;
- (void)_setupClearConsoleButton;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;

@end

