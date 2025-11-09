import XCTest
import SwiftTreeSitter
import TreeSitterRbs

final class TreeSitterRbsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rbs())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Rbs grammar")
    }
}
